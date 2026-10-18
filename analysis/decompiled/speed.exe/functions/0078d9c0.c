/* speed.exe 0078d9c0 thunk_FUN_00572360; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_00572360(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_008a0b98;
  FUN_004c2340(0,param_1[4]);
  *(undefined1 *)(param_1 + 3) = 0;
  iVar2 = FUN_00460d20(param_1[4],"InGameDialog.fng");
  if (iVar2 != 0) {
    iVar2 = FUN_00460d20(param_1[4],"OL_Dialog.fng");
    if (iVar2 != 0) {
      iVar2 = FUN_00460d20(param_1[4],"ControllerUnplugged.fng");
      if (iVar2 != 0) {
        iVar2 = FUN_00460d20(param_1[4],"Dialog.fng");
        if (iVar2 != 0) {
          iVar2 = FUN_00460d20(param_1[4],"EA_Trax.fng");
          if (iVar2 != 0) {
            iVar2 = FUN_00460d20(param_1[4],"OL_Dialog_Stacked_Buttons.fng");
            if (iVar2 != 0) {
              iVar2 = FUN_00460d20(param_1[4],"OL_GameRoom_Car_Select.fng");
              if (iVar2 != 0) {
                iVar2 = FUN_00460d20(param_1[4],"OL_GameRoom_Edit_Race.fng");
                if (iVar2 != 0) {
                  iVar2 = FUN_00460d20(param_1[4],"OL_GameRoom_Player_Details.fng");
                  if (iVar2 != 0) {
                    iVar2 = FUN_00460d20(param_1[4],"OL_EAMessenger.fng");
                    if (iVar2 != 0) {
                      cVar1 = FUN_00516b50("OL_EAMessenger.fng");
                      if (cVar1 == '\0') {
                        DAT_0091d268 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

