/* speed.exe 0078fcb0 FUN_0078fcb0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 00652af0 FUN_00652af0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 __thiscall FUN_0078fcb0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  for (puVar2 = *(undefined4 **)(param_1 + 8); puVar2 != (undefined4 *)(param_1 + 8);
      puVar2 = (undefined4 *)*puVar2) {
    if ((puVar2[2] == param_2) && (puVar2[3] == param_3)) goto LAB_0078fd1b;
  }
  puVar2 = (undefined4 *)FUN_00652af0(0x10,8);
  if (puVar2 == (undefined4 *)0x0) {
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
    return 0xffffffff;
  }
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *puVar1 = puVar2;
  *(undefined4 **)(param_1 + 0xc) = puVar2;
  puVar2[1] = puVar1;
  *puVar2 = (undefined4 *)(param_1 + 8);
LAB_0078fd1b:
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return 0;
}

