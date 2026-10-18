/* speed.exe 00665300 FUN_00665300; analysis pseudocode, not buildable source.
 * calls 00662ce0 FUN_00662ce0
 * calls 00664dc0 FUN_00664dc0
 */

void __thiscall FUN_00665300(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_00925984 = DAT_00925984 + 1;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    iVar3 = 0;
    iVar1 = 0;
  }
  else {
    iVar3 = (*(int *)(param_1 + 8) - iVar2) / 0x24;
    iVar1 = (*(int *)(param_1 + 0xc) - iVar2) / 0x24;
  }
  if (iVar3 == iVar1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0xc) - iVar2) / 0x24;
    }
    FUN_00662ce0(iVar2 * 2);
  }
  FUN_00664dc0(param_2);
  return;
}

