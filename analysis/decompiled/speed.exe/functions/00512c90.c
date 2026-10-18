/* speed.exe 00512c90 FUN_00512c90; analysis pseudocode, not buildable source.
 * calls 00512ae0 FUN_00512ae0
 * calls 00512a90 FUN_00512a90
 * calls 00598970 FUN_00598970
 * calls 00598700 FUN_00598700
 * calls 005afad0 FUN_005afad0
 * calls 00598a30 FUN_00598a30
 * calls 00460c50 FUN_00460c50
 * calls 0056bc60 FUN_0056bc60
 * calls 0056bc10 FUN_0056bc10
 */

undefined4 __thiscall FUN_00512c90(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((((*(char *)(DAT_0091ca68 + 0x3c) != '\0') && (*(char *)(DAT_0091ca68 + 0x7c) != '\0')) &&
      (*(char *)(DAT_0091ca68 + 0x9c) != '\0')) && (*(char *)(DAT_0091ca68 + 0xbc) != '\0')) {
    iVar3 = FUN_00512a90();
    if (iVar3 == 1) {
      uVar4 = 0xff99d845;
    }
    else {
      if (iVar3 != 4) {
        iVar3 = FUN_00460c50(param_2);
        if (3 < iVar3) {
          iVar3 = FUN_00460c50(param_2);
          if (iVar3 < 0x11) {
            cVar1 = FUN_005afad0(*param_2);
            if (cVar1 != '\0') {
              FUN_00598700(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x536c452d);
              return 0;
            }
            iVar3 = FUN_00460c50(param_2 + 0x40);
            if (3 < iVar3) {
              iVar3 = FUN_00460c50(param_2 + 0x40);
              if (iVar3 < 0x11) {
                cVar1 = FUN_00512ae0(param_2 + 0x80);
                if (cVar1 == '\0') {
                  FUN_00598700(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x7e77208c);
                  return 0;
                }
                return 1;
              }
            }
            FUN_00598700(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0xd29a1a18,4,0x10);
            return 0;
          }
        }
        FUN_00598700(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x4da10f66,4,0x10);
        return 0;
      }
      uVar4 = 0xa8da51cf;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_0056bc10(uVar4);
    FUN_00598970(uVar2,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar4);
    return 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056bc60(0xa5cf4291);
  FUN_00598a30(uVar4,&DAT_00890978,1,0x417b2601,0xffffffff,uVar2);
  return 0;
}

