/* speed.exe 00640b70 FUN_00640b70; analysis pseudocode, not buildable source.
 * calls 004647e0 FUN_004647e0
 * calls 005eb4e0 FUN_005eb4e0
 * calls 0056bc10 FUN_0056bc10
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00640b70(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_8c [64];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008797bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6dcc;
  local_4 = 0;
  iVar1 = FUN_005eb4e0();
  if (iVar1 == 0) {
    uVar2 = FUN_0056bc10(0xc83f7261);
    FUN_004647e0(local_8c,0x40,&DAT_008941f8,uVar2);
    FUN_004647e0(local_4c,0x40,local_8c,*(undefined4 *)(param_1[2] + 8));
    if (DAT_0092d854 != 0) {
      piVar6 = (int *)*DAT_0092d84c;
      if (piVar6 == (int *)0x0) {
        *param_1 = &PTR_LAB_008a66f8;
        ExceptionList = local_c;
        return;
      }
      while( true ) {
        iVar1 = (**(code **)(*piVar6 + 4))();
        if ((*(int *)param_1[2] == 0) ||
           (iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*(int *)param_1[2]),
           iVar3 == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 4);
        }
        if (iVar1 != iVar3) {
          (**(code **)(*piVar6 + 0x20))();
          piVar4 = (int *)FUN_005d59f0(&LAB_005650b0);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 4))(local_4c,0,0x8ab83edb,0,0,5);
          }
        }
        if (piVar6 == (int *)0xfffffff8) {
          piVar6 = (int *)0x0;
        }
        piVar4 = DAT_0092d84c + DAT_0092d854;
        piVar5 = DAT_0092d84c;
        if (DAT_0092d84c == piVar4) break;
        do {
          if ((int *)*piVar5 == piVar6) break;
          piVar5 = piVar5 + 1;
        } while (piVar5 != piVar4);
        if (((piVar5 == piVar4) || (piVar5 + 1 == piVar4)) ||
           (piVar6 = (int *)piVar5[1], piVar6 == (int *)0x0)) break;
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

