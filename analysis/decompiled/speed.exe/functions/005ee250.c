/* speed.exe 005ee250 FUN_005ee250; analysis pseudocode, not buildable source.
 * calls 005e2580 FUN_005e2580
 * calls 00454810 FUN_00454810
 * calls 00454640 FUN_00454640
 * calls 0045a430 FUN_0045a430
 * calls 006269b0 FUN_006269b0
 * calls 005ec420 FUN_005ec420
 */

void __fastcall FUN_005ee250(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 local_28;
  int local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(param_1[1],0,0);
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_00454810(0x704f72e8,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006269b0(4);
  }
  uVar2 = FUN_00454640(*puVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar3 = (undefined2 *)FUN_00454810(0x6ce23062,0);
  if (puVar3 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)FUN_006269b0(4);
  }
  *(undefined2 *)((int)param_1 + 10) = *puVar3;
  puVar1 = (undefined4 *)FUN_00454810(0x8445af47,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006269b0(4);
  }
  local_28 = *param_1;
  param_1[3] = *puVar1;
  param_1[4] = 0;
  FUN_005ec420(local_24,&local_28);
  if ((*(byte *)(local_24[0] + 0x1c) & 1) != 0) {
    *(byte *)((int)param_1 + 9) = *(byte *)((int)param_1 + 9) | 1;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

