/* speed.exe 005e5970 FUN_005e5970; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 005de590 FUN_005de590
 */

undefined2 * __thiscall FUN_005e5970(undefined2 *param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *(undefined4 *)(param_1 + 8) = *param_3;
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  iVar3 = FUN_007c4b80();
  param_1[0xe] = (short)((ulonglong)((longlong)iVar3 * 0xb60b60b7) >> 0x28) -
                 ((short)(char)((char)(iVar3 / 0x1680000) + (char)(iVar3 >> 0x1f)) >> 0xf);
  FUN_005de590();
  return param_1;
}

