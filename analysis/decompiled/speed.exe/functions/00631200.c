/* speed.exe 00631200 FUN_00631200; analysis pseudocode, not buildable source.
 * calls 00479f20 FUN_00479f20
 * calls 006e8d10 FUN_006e8d10
 * calls 005e8b20 FUN_005e8b20
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00631200(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7514;
  local_4 = 0;
  cVar1 = FUN_006e8d10();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*(int *)param_1[2] + 4))();
    iVar3 = FUN_005e8b20(uVar2);
    if (*(char *)(iVar3 + 0x1d) != '\0') {
      FUN_00479f20(param_1[2]);
    }
    (**(code **)(*(int *)param_1[2] + 0x20))();
    piVar4 = (int *)FUN_005d59f0(&LAB_00565040);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(param_1[2]);
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

