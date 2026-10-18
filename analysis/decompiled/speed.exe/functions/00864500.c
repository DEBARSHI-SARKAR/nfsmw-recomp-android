/* speed.exe 00864500 FUN_00864500; analysis pseudocode, not buildable source.
 * calls 00863160 FUN_00863160
 * calls 0084af40 FUN_0084af40
 * calls 0084b350 FUN_0084b350
 * calls 007d6cb0 __security_check_cookie
 * calls 0084ba10 FUN_0084ba10
 * calls 0084af90 FUN_0084af90
 * calls 00863b20 FUN_00863b20
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00864500(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_14 [2];
  undefined1 local_12;
  undefined1 local_11;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar2 = FUN_0084ba10(param_2);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_00863160();
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_0084b350(*(undefined4 *)(param_1 + 4),0x62696e64,local_14,0x10);
    iVar2 = 0;
    *(uint *)(param_1 + 0xc) = (uint)CONCAT11(local_12,local_11);
    puVar1 = (undefined1 *)(param_1 + 0x18);
    if (param_3 != 0) {
      iVar5 = 0x3f;
      iVar2 = 0x3f;
      puVar4 = puVar1;
      do {
        *puVar4 = puVar4[param_3 - (int)puVar1];
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar1[iVar2] = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_0084af90(*(int *)(param_1 + 0xe0),2);
      FUN_0084af40(*(undefined4 *)(param_1 + 0xe0));
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    FUN_00863b20();
  }
  return;
}

