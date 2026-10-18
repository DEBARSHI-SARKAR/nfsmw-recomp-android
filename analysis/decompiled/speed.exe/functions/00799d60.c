/* speed.exe 00799d60 FUN_00799d60; analysis pseudocode, not buildable source.
 * calls 0083a980 FUN_0083a980
 * calls 00465a70 FUN_00465a70
 * calls 007970b0 FUN_007970b0
 */

void __thiscall FUN_00799d60(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)(DAT_0091cf90 + 0x19c) < 2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x234);
  if (iVar1 < 0) {
LAB_00799d88:
    if (-1 < param_2) goto LAB_00799d9e;
  }
  else {
    if (param_2 < 0) goto LAB_00799d9e;
    if (iVar1 < 0) goto LAB_00799d88;
  }
  if ((iVar1 - param_2 < 0x1a) && (param_2 - iVar1 < 0x1a)) {
    return;
  }
LAB_00799d9e:
  *(int *)(param_1 + 0x234) = param_2;
  if (*(int *)(param_1 + 0x230) == 0) {
    puVar2 = (undefined1 *)FUN_00465a70(0x84,8);
    *(undefined1 **)(param_1 + 0x230) = puVar2;
    *puVar2 = 0;
  }
  FUN_0083a980(*(undefined4 *)(param_1 + 0x230),0x80,&DAT_008b6cbc,param_2);
  FUN_007970b0();
  return;
}

