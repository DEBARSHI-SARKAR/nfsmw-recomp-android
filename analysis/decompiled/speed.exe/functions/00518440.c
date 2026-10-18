/* speed.exe 00518440 FUN_00518440; analysis pseudocode, not buildable source.
 * calls 0057fd90 FUN_0057fd90
 * calls 006cbe40 FUN_006cbe40
 * calls 007f3b96 FUN_007f3b96
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00460ed0 FUN_00460ed0
 * calls 006cbe20 FUN_006cbe20
 */

void __fastcall FUN_00518440(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_006cbe20(&DAT_0089b6d8);
  FUN_00460ed0(param_1 + 0x17,uVar1);
  uVar1 = FUN_0057fd90(0);
  FUN_006cbe40(0,&DAT_00890978,uVar1);
  *param_1 = (int)(param_1 + 0x17);
  param_1[1] = 1;
  param_1[2] = param_1[0x34];
  param_1[3] = 1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x10] = 1;
  *(undefined2 *)(param_1 + 0x12) = 0;
  iVar2 = FUN_0064c9b0();
  if (iVar2 == 0) {
    FUN_007f3b96(param_1,0,0,0);
  }
  return;
}

