/* speed.exe 004bb1d0 FUN_004bb1d0; analysis pseudocode, not buildable source.
 * calls 004b2e40 FUN_004b2e40
 */

void FUN_004bb1d0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (int *)0x0) && (piVar1 = (int *)*param_1, *piVar1 == 0x4d525453)) {
    iVar2 = piVar1[0x14];
    piVar1[0x14] = param_2;
    iVar3 = piVar1[0x16];
    if (iVar3 < iVar2 != iVar3 < param_2) {
      FUN_004b2e40(param_1,iVar3 < param_2);
    }
  }
  return;
}

