/* speed.exe 0057bec0 FUN_0057bec0; analysis pseudocode, not buildable source.
 * calls 005fbe70 FUN_005fbe70
 * calls 004647e0 FUN_004647e0
 * calls 00460f50 FUN_00460f50
 * calls 0065f7a0 FUN_0065f7a0
 * calls 005fba70 FUN_005fba70
 * calls 005faab0 FUN_005faab0
 */

undefined4 FUN_0057bec0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 != 2) {
    if (DAT_0091e000 != 0) {
      if (*(int *)(DAT_0091e000 + 0x1960) == 0) {
        bVar1 = *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
        if (bVar1 < 0xd) {
          if (bVar1 < 9) {
            FUN_004647e0(param_2,param_3,"MINI_MAP");
          }
          else {
            FUN_004647e0(param_2,param_3,"MINI_MAP_UNLOCK_2");
          }
        }
        else {
          FUN_004647e0(param_2,param_3,"MINI_MAP_UNLOCK_1");
        }
      }
      else if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
        cVar2 = FUN_005fbe70();
        if (cVar2 == '\0') {
          uVar3 = FUN_005fba70();
          FUN_004647e0(param_2,param_3,"MINI_MAP_%s",uVar3);
        }
        else {
          iVar4 = FUN_005faab0();
          if (iVar4 == 0) {
            FUN_004647e0(param_2,param_3,"MINI_MAP_UNLOCK_1");
          }
          else {
            iVar4 = FUN_005faab0();
            if (iVar4 == 1) {
              FUN_004647e0(param_2,param_3,"MINI_MAP_UNLOCK_2");
            }
            else {
              FUN_004647e0(param_2,param_3,"MINI_MAP");
            }
          }
        }
      }
      iVar4 = 0;
      if (0 < param_3) {
        do {
          if (*(char *)(iVar4 + param_2) == '.') {
            *(undefined1 *)(iVar4 + param_2) = 0x5f;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_3);
      }
      FUN_00460f50(param_2);
      FUN_004647e0(param_4,param_5,"TRACKS\\L2RA\\%s.BIN",param_2);
    }
    iVar4 = FUN_0065f7a0(param_4);
    if (iVar4 != 0) {
      return 1;
    }
  }
  return 0;
}

