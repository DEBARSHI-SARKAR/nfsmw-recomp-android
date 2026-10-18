/* speed.exe 00539e90 FUN_00539e90; analysis pseudocode, not buildable source.
 * calls 005b7780 FUN_005b7780
 * calls 0079cbb0 FUN_0079cbb0
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 005229e0 FUN_005229e0
 * calls 0079bac0 FUN_0079bac0
 * calls 00524aa0 FUN_00524aa0
 * calls 00524920 FUN_00524920
 * calls 005252d0 FUN_005252d0
 * calls 0078bcc0 FUN_0078bcc0
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_00539e90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x11a5) != '\0') {
    return;
  }
  FUN_0079bac0();
  iVar2 = FUN_0078bcc0();
  if (iVar2 == 0) {
    return;
  }
  FUN_0079bac0();
  DAT_008f32bc = FUN_0079cbb0();
  if ((DAT_008f32bc < 1) || (DAT_008f32bc == -1)) {
    if (DAT_008f32bc == 0) {
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xabf6f060,&DAT_0089ddf0);
      *(undefined1 *)(param_1 + 0x11a5) = 1;
      if (*(int *)(DAT_0091cf90 + 0x13c) == 0) {
        FUN_005229e0();
      }
    }
    else {
      cVar1 = FUN_00524aa0(*(undefined4 *)(param_1 + 0x10),0xabf6f060,0x16a259);
      if (cVar1 == '\0') {
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xabf6f060,0x16a259,1);
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xc52b0819,0x16a259,1);
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x6e266928,0x16a259,1);
      }
    }
    goto LAB_0053a07d;
  }
  cVar1 = FUN_00524aa0(*(undefined4 *)(param_1 + 0x10),0xc52b0819,0x1ca7c0);
  if (cVar1 == '\0') {
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xc52b0819,0x1ca7c0,1);
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x6e266928,0x1ca7c0,1);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x6e266928,0x250d0152);
  }
  if (DAT_008f32bc < 0xb) {
    if (DAT_008f32bc < 6) {
      cVar1 = FUN_00524aa0(*(undefined4 *)(param_1 + 0x10),0xabf6f060,0x7f4038d4);
      if (cVar1 == '\0') {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = 0x7f4038d4;
        goto LAB_00539fbf;
      }
    }
    else {
      cVar1 = FUN_00524aa0(*(undefined4 *)(param_1 + 0x10),0xabf6f060,0x2c856ed);
      if (cVar1 == '\0') {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = 0x2c856ed;
LAB_00539fbf:
        FUN_00524920(uVar3,0xabf6f060,uVar4,1);
      }
    }
  }
  else {
    cVar1 = FUN_00524aa0(*(undefined4 *)(param_1 + 0x10),0xabf6f060,0x1ca7c0);
    if (cVar1 == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = 0x1ca7c0;
      goto LAB_00539fbf;
    }
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xabf6f060,&DAT_0089d764,DAT_008f32bc);
LAB_0053a07d:
  if (*DAT_0091cadc != -0xd8) {
    for (iVar2 = *(int *)(*DAT_0091cadc + 0xe0); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      FUN_005b7780(0x971391a2,0,iVar2,0xffffffff,0);
    }
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
     (iVar2 = FUN_005b8550(0xabf6f060), iVar2 != 0)) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x2000000;
  }
  return;
}

