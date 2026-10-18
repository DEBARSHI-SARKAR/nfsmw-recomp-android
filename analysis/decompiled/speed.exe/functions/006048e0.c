/* speed.exe 006048e0 FUN_006048e0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00460d20 FUN_00460d20
 * calls 006253d0 FUN_006253d0
 * calls 004b9080 FUN_004b9080
 */

void FUN_006048e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087647f;
  local_c = ExceptionList;
  puVar2 = &DAT_008f5d7c;
  ExceptionList = &local_c;
  do {
    iVar1 = FUN_00460d20(param_1,puVar2[-1]);
    if (iVar1 == 0) {
      iVar1 = FUN_00627400(0x10);
      local_4 = 0;
      if (iVar1 != 0) {
        FUN_006253d0(*puVar2,param_2);
      }
      local_4 = 0xffffffff;
      switch(*puVar2) {
      case 0:
        pcVar4 = "LuaCall:error";
        uVar3 = 0x10;
        break;
      default:
        goto switchD_00604955_caseD_1;
      case 5:
        pcVar4 = "LuaCall:end of race";
        uVar3 = 7;
        break;
      case 7:
      case 8:
        pcVar4 = "LuaCall:fe cam";
        uVar3 = 1;
        break;
      case 10:
        pcVar4 = "LuaCall:loading";
        uVar3 = 0;
        break;
      case 0xb:
        pcVar4 = "LuaCall:bust load";
        uVar3 = 0xe;
        break;
      case 0xd:
        pcVar4 = "LuaCall:sms";
        uVar3 = 5;
        break;
      case 0xe:
        pcVar4 = "LuaCall:raceover";
        uVar3 = 3;
      }
      FUN_004b9080(param_2,uVar3,pcVar4);
    }
switchD_00604955_caseD_1:
    puVar2 = puVar2 + 2;
    if (0x8f5dc3 < (int)puVar2) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

