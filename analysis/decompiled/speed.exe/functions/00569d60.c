/* speed.exe 00569d60 FUN_00569d60; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00516c50 FUN_00516c50
 * calls 00515ef0 FUN_00515ef0
 * calls 00516b90 FUN_00516b90
 * calls 00514d10 FUN_00514d10
 * calls 005258b0 FUN_005258b0
 */

void __thiscall FUN_00569d60(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x158);
  if (iVar3 == 0) {
    if (param_2 < 0x911ab365) {
      if (param_2 == 0x911ab364) {
        if (*(int *)(param_1 + 0x144) != 0) {
          *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x144);
        }
      }
      else if (param_2 == 0xc407210) {
        if (*(int *)(param_3 + 0x10) == -0x47583934) {
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x138);
          return;
        }
        if (*(int *)(param_3 + 0x10) == -0x47583933) {
          *(undefined4 *)(param_1 + 0x14c) = 1;
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x140);
          return;
        }
      }
      else if (param_2 == 0x35f8620b) {
        iVar3 = FUN_00515ef0(*(undefined4 *)(param_1 + 0x10));
        if (param_3 == iVar3) {
          FUN_00514d10(param_3,0x249db7b7,1);
          if (*(int *)(param_3 + 0x10) == -0x47583934) {
            FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd,0x7ab5521a,1);
            return;
          }
          if (*(int *)(param_3 + 0x10) == -0x47583933) {
            FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cc,0x7ab5521a,1);
            return;
          }
        }
      }
    }
  }
  else if (param_2 == 0xc98356ba) {
    uVar1 = *(undefined4 *)(param_1 + 0x154);
    cVar2 = FUN_00516b90(*(undefined4 *)(param_1 + 0x10));
    if (cVar2 != '\0') {
      FUN_005258b0(1);
    }
    FUN_00516c50(iVar3,uVar1,0xff);
    return;
  }
  return;
}

