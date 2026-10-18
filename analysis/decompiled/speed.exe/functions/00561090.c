/* speed.exe 00561090 FUN_00561090; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005442d0 FUN_005442d0
 * calls 005273d0 FUN_005273d0
 */

int * FUN_00561090(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871074;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = _malloc(0x88);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_005273d0(param_1);
    piVar1 = piVar2 + 0x1f;
    piVar2[0x18] = 1;
    *(undefined1 *)(piVar2 + 0x1a) = 0;
    piVar2[0x1b] = 0;
    piVar2[0x1c] = 0;
    *(undefined1 *)(piVar2 + 0x1d) = 0;
    *(undefined1 *)((int)piVar2 + 0x75) = 0;
    *(undefined1 *)((int)piVar2 + 0x76) = 0;
    piVar2[0x1e] = 0;
    *piVar1 = (int)piVar1;
    piVar2[0x20] = (int)piVar1;
    *(undefined1 *)(piVar2 + 0x21) = 0;
    *piVar2 = (int)&PTR_FUN_0089edd0;
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))();
  ExceptionList = local_c;
  return piVar2;
}

