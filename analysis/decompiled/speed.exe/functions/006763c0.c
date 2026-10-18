/* speed.exe 006763c0 FUN_006763c0; analysis pseudocode, not buildable source.
 * calls 00459040 FUN_00459040
 * calls 00454c30 FUN_00454c30
 * calls 004547d0 FUN_004547d0
 * calls 00452bd0 FUN_00452bd0
 * calls 004546c0 FUN_004546c0
 * calls 0045beb0 FUN_0045beb0
 */

undefined1 FUN_006763c0(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_1c [12];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087aa78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_00459040(param_1,param_3);
  if ((cVar1 == '\0') && (cVar1 = FUN_004547d0(param_1), cVar1 == '\0')) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_004546c0(local_1c,param_1);
  uVar3 = 0;
  local_4 = 0;
  if (param_3 != 0) {
    do {
      if (local_10 == 0) {
        iVar2 = FUN_00454c30(uVar3);
LAB_00676448:
        if (iVar2 != 0) {
          FUN_0045beb0(param_2 + uVar3 * 0xc);
        }
      }
      else {
        iVar2 = local_10;
        if (uVar3 == 0) goto LAB_00676448;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  local_4 = 0xffffffff;
  FUN_00452bd0();
  ExceptionList = local_c;
  return 1;
}

