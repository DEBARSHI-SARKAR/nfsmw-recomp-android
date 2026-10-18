/* speed.exe 0063a600 FUN_0063a600; analysis pseudocode, not buildable source.
 * calls 00744d40 FUN_00744d40
 * calls 0056bc60 FUN_0056bc60
 * calls 00744d70 FUN_00744d70
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_0063a600(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7120;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[2]);
    if (iVar2 != 0) {
      piVar4 = *(int **)(iVar2 + 4);
      if (piVar4 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar4 + 0x24))();
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(*piVar4 + 0x70))();
          iVar2 = FUN_00744d40(uVar3);
          if (iVar2 != 0) {
            FUN_00744d70(2);
          }
          piVar4 = (int *)(**(code **)(*piVar4 + 0x20))();
          iVar2 = (**(code **)(*piVar4 + 0x20))();
          if (iVar2 != 0) {
            piVar4 = (int *)FUN_005d59f0(&LAB_005650b0);
            if (piVar4 != (int *)0x0) {
              iVar2 = *piVar4;
              pvVar5 = (void *)0x0;
              uVar3 = FUN_0056bc60(0xb1e2e5c2,0,0xa19bb14c,0,0,3);
              (**(code **)(iVar2 + 4))(uVar3);
              *param_1 = &PTR_LAB_008a66f8;
              ExceptionList = pvVar5;
              return;
            }
          }
        }
      }
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

