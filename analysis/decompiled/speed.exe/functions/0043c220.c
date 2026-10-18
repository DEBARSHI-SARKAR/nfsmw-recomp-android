/* speed.exe 0043c220 thunk_FUN_004352f0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_004352f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00868a6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00892b20;
  piVar2 = *(int **)param_1[3];
  uStack_4 = 0;
  if (piVar2 != (int *)param_1[3]) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[3]);
  }
  piVar2 = (int *)param_1[3];
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(undefined4 *)(param_1[3] + 4) = param_1[3];
  param_1[4] = 0;
  if (piVar1 != (int *)param_1[3]) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_005d0370(piVar1,0xc,0);
      piVar1 = piVar2;
    } while (piVar2 != (int *)param_1[3]);
  }
  param_1[1] = 0;
  piVar2 = (int *)param_1[3];
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(undefined4 *)(param_1[3] + 4) = param_1[3];
  uStack_4 = 0xffffffff;
  param_1[4] = 0;
  if (piVar1 != (int *)param_1[3]) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_005d0370(piVar1,0xc,0);
      piVar1 = piVar2;
    } while (piVar2 != (int *)param_1[3]);
  }
  if (param_1[3] != 0) {
    FUN_005d0370(param_1[3],0xc,0);
  }
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}

