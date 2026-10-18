/* speed.exe 0057d130 FUN_0057d130; analysis pseudocode, not buildable source.
 * calls 005155e0 FUN_005155e0
 * calls 00515d70 FUN_00515d70
 * calls 005b2d50 FUN_005b2d50
 * calls 005b2d80 FUN_005b2d80
 * calls 005157e0 FUN_005157e0
 * calls 00514e20 FUN_00514e20
 * calls 00514d10 FUN_00514d10
 * calls 006e8df0 FUN_006e8df0
 * calls 005699f0 FUN_005699f0
 * calls 00515520 FUN_00515520
 * calls 00514fd0 FUN_00514fd0
 * calls 00524cc0 FUN_00524cc0
 * calls 005687a0 FUN_005687a0
 * calls 00515830 FUN_00515830
 */

void __fastcall FUN_0057d130(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  float local_28;
  undefined1 local_24 [20];
  undefined1 local_10 [16];
  
  iVar2 = FUN_006e8df0();
  if (iVar2 == 1) {
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    local_28 = (*(float *)(param_1 + 0x54) / *(float *)(param_1 + 0x5c)) *
               *(float *)(param_1 + 0x68);
    FUN_00515520(uVar6,local_24,&local_2c);
    FUN_005155e0(uVar6,local_28,local_2c);
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    local_2c = *(undefined4 *)(param_1 + 0x6c);
    FUN_00514fd0(uVar6,local_24,&local_28);
    FUN_00524cc0(uVar6,local_2c,local_28);
    if (*(float *)(param_1 + 0x54) < *(float *)(param_1 + 0x58)) {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x40),0x1744b3,1);
    }
    else {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x40),0x61d30442,1);
    }
  }
  else {
    fVar5 = (float10)FUN_005699f0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x5c));
    FUN_00514e20(*(undefined4 *)(param_1 + 0x40),(float)fVar5);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_005b2d50(0xffffffff);
    FUN_005b2d50(0x88ffffff);
    cVar1 = FUN_005687a0(*(undefined4 *)(param_1 + 0x60));
    FUN_00515d70(*(undefined4 *)(param_1 + 0x50),&DAT_008a0d7c,(int)cVar1);
    if (*(char *)(param_1 + 100) == '\0') {
      uVar3 = FUN_005b2d80();
      uVar6 = *(undefined4 *)(param_1 + 0x50);
    }
    else {
      uVar3 = FUN_005b2d80();
      uVar6 = *(undefined4 *)(param_1 + 0x50);
    }
    FUN_005157e0(uVar6,uVar3);
  }
  if (*(char *)(param_1 + 0x65) == '\0') {
    if (*(char *)(param_1 + 0x66) != '\0') {
      *(undefined1 *)(param_1 + 0x66) = 0;
      FUN_00515830(local_10,*(undefined4 *)(param_1 + 0x40));
      uVar4 = FUN_005b2d80();
      FUN_005157e0(*(undefined4 *)(param_1 + 0x40),~uVar4 | 0xff000000);
    }
  }
  else if (*(char *)(param_1 + 0x66) == '\0') {
    *(undefined1 *)(param_1 + 0x66) = 1;
    FUN_00515830(local_10,*(undefined4 *)(param_1 + 0x40));
    uVar4 = FUN_005b2d80();
    FUN_005157e0(*(undefined4 *)(param_1 + 0x40),~uVar4 | 0xff000000);
    return;
  }
  return;
}

