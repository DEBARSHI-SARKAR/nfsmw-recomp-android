/* speed.exe 006607d0 FUN_006607d0; analysis pseudocode, not buildable source.
 * calls 00667620 thunk_FUN_00667460
 * calls 00460dd0 FUN_00460dd0
 * calls 0045cd20 __break
 * calls 00460c70 FUN_00460c70
 * calls 00460ed0 FUN_00460ed0
 * calls 00667630 thunk_FUN_00667460
 * calls 00464780 FUN_00464780
 * calls 00660320 FUN_00660320
 */

void FUN_006607d0(void)

{
  int iVar1;
  undefined1 local_280 [64];
  undefined1 local_240 [64];
  undefined1 local_200 [512];
  
  FUN_00460c70(local_200,PTR_s_193669_193671_193675_193772____008f8690);
  FUN_00660320(local_200,1);
  if (DAT_009258d4 != 0) {
    FUN_00464780("Joylog Changelist: %s\n",local_200);
  }
  FUN_00464780("Changelist: %s\n",PTR_s_193669_193671_193675_193772____008f8690);
  FUN_00460c70(local_280,&DAT_008a87a4);
  FUN_00460ed0(local_280,local_280," Release");
  FUN_00460ed0(local_280,local_280,&PTR_LAB_008a8ea8);
  if (DAT_009258d8 == 0) {
    if (DAT_009258d4 != 0) {
      FUN_00660320(local_240,1);
      FUN_00464780("Joylog Build Version: %s\n",local_240);
      iVar1 = FUN_00460dd0(local_240,local_280);
      if (iVar1 != 0) {
        FUN_00464780("ERROR:  Joylog captured with %s, you\'re running %s\n",local_240,local_280);
                    /* WARNING: Subroutine does not return */
        __break();
      }
    }
  }
  else {
    FUN_00660320(local_280,1);
  }
  FUN_00464780("Build Type: %s\n",local_280);
  if (DAT_009258d4 != 0) {
    thunk_FUN_00667460();
  }
  if (DAT_009258d8 != 0) {
    thunk_FUN_00667460();
  }
  return;
}

