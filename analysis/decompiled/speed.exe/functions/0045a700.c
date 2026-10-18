/* speed.exe 0045a700 FUN_0045a700; analysis pseudocode, not buildable source.
 * calls 0045a220 FUN_0045a220
 * calls 00459700 FUN_00459700
 * calls 004595c0 FUN_004595c0
 */

void __thiscall FUN_0045a700(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  FUN_004595c0();
  FUN_00459700(uVar2,param_2,*(undefined4 *)(param_2 + 4),0);
  if ((*(int *)(param_2 + 4) == 0) || (iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x10), iVar1 == 0))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x20);
  }
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_0045a220(uVar2);
  }
  return;
}

