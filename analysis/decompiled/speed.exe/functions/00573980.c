/* speed.exe 00573980 FUN_00573980; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 */

undefined4 * __fastcall FUN_00573980(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_LAB_0089b10c;
  uVar1 = FUN_005af1c0(&DAT_008a051c);
  param_1[2] = uVar1;
  uVar1 = FUN_005af1c0(&DAT_008a0bb0);
  param_1[1] = uVar1;
  uVar1 = FUN_005af1c0("HIGHLIGHT");
  param_1[3] = uVar1;
  uVar1 = FUN_005af1c0("UNHIGHLIGHT");
  param_1[4] = uVar1;
  return param_1;
}

