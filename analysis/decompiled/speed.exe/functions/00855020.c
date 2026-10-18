/* speed.exe 00855020 FUN_00855020; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00859b60 FUN_00859b60
 * calls 00859ba0 FUN_00859ba0
 * calls 0078af30 FUN_0078af30
 */

int * FUN_00855020(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 < 0x1000) {
    param_1 = 0x1000;
  }
  iVar1 = FUN_00859b60();
  iVar2 = FUN_0078af30(param_1);
  piVar3 = (int *)FUN_0078af30(0x658);
  if (iVar1 != 0) {
    if ((iVar2 != 0) && (piVar3 != (int *)0x0)) {
      piVar5 = piVar3;
      for (iVar4 = 0x196; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      piVar3[0x183] = 0;
      *piVar3 = iVar1;
      piVar3[0x18a] = iVar2;
      piVar3[0x18b] = param_1;
      piVar3[0x191] = 30000;
      return piVar3;
    }
    FUN_00859ba0(iVar1);
  }
  if (iVar2 != 0) {
    thunk_FUN_004655f0(iVar2);
  }
  return piVar3;
}

