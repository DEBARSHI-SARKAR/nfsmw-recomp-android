/* speed.exe 00405e80 FUN_00405e80; analysis pseudocode, not buildable source.
 */

int FUN_00405e80(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  uVar1 = DAT_00915f84 + uVar2;
  if (DAT_00915f88 <= uVar1) {
    DAT_00915f94 = 1;
    DAT_00915f98 = DAT_00915f98 + uVar2;
    return 0;
  }
  iVar3 = DAT_00915f84;
  DAT_00915f84 = uVar1;
  return iVar3;
}

