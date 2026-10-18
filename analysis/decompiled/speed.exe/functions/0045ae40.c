/* speed.exe 0045ae40 FUN_0045ae40; analysis pseudocode, not buildable source.
 * calls 00626c90 thunk_FUN_00454640
 * calls 0045b0d0 FUN_0045b0d0
 * calls 00454e70 FUN_00454e70
 * calls 00626c50 FUN_00626c50
 * calls 0045b4c0 FUN_0045b4c0
 * calls 0045b300 FUN_0045b300
 * calls 006269b0 FUN_006269b0
 * calls 0045b000 FUN_0045b000
 * calls 0045b120 FUN_0045b120
 * calls 00459dc0 FUN_00459dc0
 * calls 0045b520 FUN_0045b520
 * calls 0045b080 FUN_0045b080
 */

undefined4 * __thiscall FUN_0045ae40(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 local_39;
  int local_38;
  int local_34 [2];
  undefined4 *local_2c;
  undefined1 local_28 [8];
  undefined4 local_20;
  char *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_2;
  puStack_8 = &LAB_00869f0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_1;
  *param_1 = &PTR_FUN_00893ce8;
  local_4 = 0;
  local_2c = param_1;
  FUN_0045b000(*param_2);
  local_4._0_1_ = 1;
  FUN_0045b4c0(0);
  local_4._0_1_ = 2;
  FUN_0045b120(&local_39,&param_2);
  local_4._0_1_ = 3;
  FUN_0045b080();
  local_4._0_1_ = 4;
  FUN_0045b0d0();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00454e70(*puVar3);
  iVar2 = puVar3[2];
  param_1[6] = iVar2 + 1;
  FUN_0045b300(iVar2 + 1);
  FUN_006269b0(puVar3[1]);
  local_20 = 0;
  local_1c = "";
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  piVar4 = (int *)FUN_00459dc0(local_34,&local_20);
  param_2 = (undefined4 *)(*piVar4 + 0xc);
  FUN_0045b520(&param_2);
  pcVar5 = (char *)puVar3[3];
  param_2 = (undefined4 *)0x0;
  if (puVar3[2] != 0) {
    do {
      if (param_1[8] == 0) {
        local_38 = 0;
      }
      else {
        local_38 = (int)(param_1[9] - param_1[8]) >> 2;
      }
      local_34[0] = puVar3[(int)param_2 + 4];
      local_20 = thunk_FUN_00454640(pcVar5);
      local_18 = local_34[0];
      local_14 = local_38;
      local_1c = pcVar5;
      local_10 = FUN_00626c50(local_20);
      piVar4 = (int *)FUN_00459dc0(local_28,&local_20);
      local_34[0] = *piVar4 + 0xc;
      FUN_0045b520(local_34);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (param_2 < (uint)puVar3[2]);
  }
  ExceptionList = local_c;
  return param_1;
}

