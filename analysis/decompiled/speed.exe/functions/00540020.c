/* speed.exe 00540020 FUN_00540020; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 0053f560 FUN_0053f560
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 00516be0 FUN_00516be0
 */

void __fastcall FUN_00540020(int param_1)

{
  int iVar1;
  
  FUN_0053f560(0);
  FUN_00516be0(0xf9e94d58,PTR_s_OL_GameRoom_fng_008f32b0,0xffffffff,0xff);
  *(undefined4 *)(param_1 + 0xec) = 1;
  DAT_0091ca90 = 1;
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(0x47ff4e7c), iVar1 != 0)) &&
     (iVar1 = FUN_005b1360(0xde6eff34), iVar1 != 0)) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}

