/* speed.exe 00525b70 FUN_00525b70; analysis pseudocode, not buildable source.
 * calls 007a9db0 FUN_007a9db0
 * calls 005257f0 FUN_005257f0
 * calls 007a2940 FUN_007a2940
 * calls 00739a70 FUN_00739a70
 * calls 007a2960 FUN_007a2960
 * calls 005996b0 FUN_005996b0
 * calls 00597c10 FUN_00597c10
 * calls 004aefe0 FUN_004aefe0
 */

void __fastcall FUN_00525b70(undefined1 *param_1)

{
  undefined1 local_310 [784];
  
  if (param_1[0x24] == '\0') {
    FUN_004aefe0(0xffffffff);
    if (DAT_009b9e64 == '\0') {
      FUN_00739a70(0xffffffff,0,0,0);
      FUN_007a2960();
      FUN_005996b0(0,local_310);
      FUN_007a9db0(local_310,2,0);
      DAT_009b9e64 = '\x01';
    }
    FUN_007a2940();
  }
  else {
    param_1[0x24] = 0;
    FUN_00597c10();
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  DAT_0091cae4 = 0;
  FUN_005257f0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14),0);
  return;
}

