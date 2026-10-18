/* speed.exe 005207e0 FUN_005207e0; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 00598970 FUN_00598970
 * calls 00598a30 FUN_00598a30
 * calls 0056bc10 FUN_0056bc10
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00460d20 FUN_00460d20
 */

void FUN_005207e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0056c6e0(*(undefined4 *)(param_2 + 0x134));
  *(undefined4 *)(param_2 + 0x134) = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    FUN_00516be0(0xb34a760f,*(undefined4 *)(param_2 + 0x10),0xffffffff,0xff);
    return;
  }
  if (iVar1 == 0x6475706c) {
    uVar3 = 0x67f1d911;
  }
  else if (iVar1 == 0x64626572) {
    uVar3 = 0x91c92a94;
  }
  else if (iVar1 == 0x6d61696c) {
    uVar3 = 0x7e77208c;
  }
  else {
    if (iVar1 == 0x706d616c) {
      iVar1 = FUN_00460d20(*(undefined4 *)(param_2 + 0x10),PTR_s_UI_OLAgeVerif_fng_008f3278);
      if (iVar1 == 0) {
        return;
      }
      *(undefined1 *)(param_2 + 0x124) = 1;
      return;
    }
    if (iVar1 == 0x69706173) {
      uVar3 = 0xd29a1a18;
LAB_00520894:
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = FUN_0056bc10(uVar3,4,0x10);
      FUN_00598970(uVar2,&DAT_00890978,1,0x417b2601,0x3098bf25,0x3098bf25,uVar3);
      return;
    }
    if (iVar1 == 0x70617373) {
      uVar3 = 0xc042c11c;
    }
    else {
      if (iVar1 == 0x696e616d) {
        uVar3 = 0x4da10f66;
        goto LAB_00520894;
      }
      if (iVar1 == 0x656c656e) {
        uVar2 = *(undefined4 *)(param_2 + 0x10);
        uVar3 = FUN_0056bc10(0x6864bfed,0x32);
        goto LAB_005209b1;
      }
      if (iVar1 == 0x66696c74) {
        uVar3 = 0xfe641264;
      }
      else {
        if (iVar1 == 0x746f6f79) {
          uVar3 = *(undefined4 *)(param_2 + 0x10);
          uVar2 = FUN_0056bc10(0x87983521);
          FUN_00598a30(uVar3,&DAT_00890978,1,0x417b2601,0x3098bf25,uVar2);
          return;
        }
        if (iVar1 == 0x697a6970) {
          FUN_00598970(*(undefined4 *)(param_2 + 0x10),&DAT_00890978,1,0x417b2601,0x3098bf25,
                       0x3098bf25,"I18N: Your postal code is incorrect.");
          return;
        }
        if (iVar1 == 0x696d7374) {
          FUN_00598970(*(undefined4 *)(param_2 + 0x10),&DAT_00890978,1,0x417b2601,0x3098bf25,
                       0x3098bf25,"I18N: Your account name contains invalid characters");
          return;
        }
        uVar3 = 0x2eb94b88;
      }
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = FUN_0056bc10(uVar3);
LAB_005209b1:
  FUN_00598970(uVar2,&DAT_00890978,1,0x417b2601,0x3098bf25,0x3098bf25,uVar3);
  return;
}

