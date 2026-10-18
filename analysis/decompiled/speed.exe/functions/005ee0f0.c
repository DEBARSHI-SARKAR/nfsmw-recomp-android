/* speed.exe 005ee0f0 FUN_005ee0f0; analysis pseudocode, not buildable source.
 * calls 005ee090 FUN_005ee090
 * calls 004647c0 FUN_004647c0
 * calls 005e38d0 FUN_005e38d0
 * calls 0045c090 FUN_0045c090
 * calls 004655f0 FUN_004655f0
 * calls 0064ae60 FUN_0064ae60
 * calls 0045c380 FUN_0045c380
 * calls 00659260 FUN_00659260
 * calls 00452880 FUN_00452880
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00663fc0 FUN_00663fc0
 * calls 006641f0 FUN_006641f0
 */

void __fastcall FUN_005ee0f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_100 [128];
  undefined1 auStack_80 [128];
  
  FUN_005e38d0(param_1);
  iVar2 = 0;
  if ((~*(byte *)(param_1 + 2) & 1) != 0) {
    iVar2 = FUN_0064ae60(param_1[8]);
  }
  if (param_1[0xe] != 0) {
    FUN_005ee090();
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_004655f0(param_1[0xf]);
  }
  param_1[0xf] = 0;
  FUN_0045c090();
  piVar1 = (int *)*param_1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_0045c380();
    FUN_00452880(0x3c,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(piVar1,0x3c,0);
  }
  *param_1 = 0;
  FUN_004647c0(local_100,"%s.bin",param_1[1]);
  FUN_00663fc0(local_100);
  FUN_004647c0(auStack_80,"%s.vlt",param_1[1]);
  FUN_006641f0(auStack_80);
  if (iVar2 != 0) {
    FUN_0064ae60(iVar2);
  }
  if ((~*(byte *)(param_1 + 2) & 1) != 0) {
    if ((int *)param_1[8] != (int *)0x0) {
      (**(code **)(*(int *)param_1[8] + 8))(1);
    }
    param_1[8] = 0;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    thunk_FUN_007c7250(param_1[3]);
    param_1[3] = 0;
    param_1[2] = param_1[2] & 0xfffffffe;
  }
  return;
}

