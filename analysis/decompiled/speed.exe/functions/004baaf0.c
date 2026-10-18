/* speed.exe 004baaf0 FUN_004baaf0; analysis pseudocode, not buildable source.
 * calls 0081d582 FUN_0081d582
 * calls 0081d55b FUN_0081d55b
 * calls 00464080 FUN_00464080
 * calls 004b2130 FUN_004b2130
 * calls 00465a70 FUN_00465a70
 * calls 00464a50 FUN_00464a50
 */

void __thiscall FUN_004baaf0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_18 [5];
  undefined1 local_13;
  
  FUN_0081d582(local_18);
  local_18[0] = 100;
  local_13 = 0;
  iVar1 = FUN_0081d55b(param_3,param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 0xc) + iVar1;
  iVar1 = iVar1 + param_4;
  *(int *)(param_1 + 0x10) = iVar1;
  iVar2 = FUN_00464080(DAT_008ee558);
  if (iVar2 < iVar1) {
    FUN_00464a50(DAT_008ee558,0,0x7fffffff);
    uVar3 = FUN_00465a70(iVar1,0x1000);
  }
  else {
    uVar3 = FUN_00465a70(iVar1,(DAT_008ee558 & 0xf) + 0x1000);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  FUN_004b2130(param_2,param_3,uVar3,param_4,local_18);
  return;
}

