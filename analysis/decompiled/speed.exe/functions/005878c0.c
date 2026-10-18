/* speed.exe 005878c0 FUN_005878c0; analysis pseudocode, not buildable source.
 * calls 00515e90 FUN_00515e90
 * calls 00515f20 FUN_00515f20
 */

undefined4 __thiscall FUN_005878c0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_2);
  if ((-1 < iVar1) && (iVar1 < param_1[9])) {
    if (param_1[1] == 0) goto LAB_005878f0;
    piVar3 = (int *)(param_1[1] + -4);
    while( true ) {
      piVar2 = param_1;
      if (param_1 == (int *)0xfffffffc) {
        piVar2 = (int *)0x0;
      }
      if (piVar3 == piVar2) break;
      FUN_00515f20(param_1[6],*(undefined4 *)(piVar3[4] + 0x10),0);
      if (piVar3[1] == 0) {
LAB_005878f0:
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(piVar3[1] + -4);
      }
    }
    if (*(char *)(param_2 + 0x20) == '\0') {
      param_1[3] = param_2;
      FUN_00515f20(param_1[6],*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x10),1);
      FUN_00515e90(param_1[6],*(undefined4 *)(*(int *)(param_1[3] + 0x10) + 0x10));
      iVar1 = (**(code **)(*param_1 + 0x24))(param_2);
      param_1[0x32] = iVar1;
      return 1;
    }
  }
  return 0;
}

