/* speed.exe 007aade0 FUN_007aade0; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 005faa20 FUN_005faa20
 * calls 0056e090 FUN_0056e090
 * calls 005dca40 FUN_005dca40
 * calls 0056e560 FUN_0056e560
 * calls 00515e20 FUN_00515e20
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 005af1c0 FUN_005af1c0
 * calls 005fab40 FUN_005fab40
 * calls 006547a0 FUN_006547a0
 * calls 00515bb0 FUN_00515bb0
 * calls 0056e010 FUN_0056e010
 * calls 00515b90 FUN_00515b90
 * calls 0056dbe0 FUN_0056dbe0
 * calls 005251a0 FUN_005251a0
 * calls 0056bc00 FUN_0056bc00
 * calls 005fba70 FUN_005fba70
 * calls 00524850 FUN_00524850
 * calls 005fb850 FUN_005fb850
 * calls 007c4b80 FUN_007c4b80
 * calls 00525220 FUN_00525220
 * calls 0056bc10 FUN_0056bc10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007aade0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float local_84;
  undefined1 local_80 [128];
  
  uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0x91c4a50,0x5bc);
  FUN_00515bb0(uVar3);
  uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0x2d145be3,0x682);
  FUN_00515bb0(uVar3);
  iVar4 = FUN_0056dbe0(0xb);
  switch(*(undefined1 *)(iVar4 + 0xd)) {
  case 0:
    uVar3 = 0xa6850651;
    break;
  case 1:
    uVar3 = 0xa5c20e7d;
    break;
  case 2:
    uVar3 = 0x8663faef;
    break;
  case 3:
    uVar3 = 0x632dd19b;
    break;
  default:
    uVar3 = 0;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x78008599,uVar3);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x4510987f,uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = FUN_0045d3a0(*(undefined4 *)(param_1 + 0x104));
  FUN_005252d0(uVar3,0x6f25a248,&DAT_0089d764,uVar5);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = FUN_0045d3a0(0);
  FUN_005252d0(uVar3,0xb2037bdc,&DAT_0089d764,uVar5);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = FUN_0056e010(*(undefined4 *)(DAT_0091cf90 + 0x18));
  FUN_00525220(uVar3,0xb5154998,uVar5);
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x6b67d70b);
  FUN_00514cc0(uVar3);
  if (*(int *)(param_1 + 0x108) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x104) + 0xc) == '\0') {
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x6b67d70b);
      FUN_00514c70(uVar3);
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x73dcb662);
      FUN_00514cc0(uVar3);
    }
    else {
      FUN_00515e20(local_80,0x80,"blacklist_rival_%02d_aka",
                   *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10));
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_005af1c0(local_80,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10));
      uVar5 = FUN_0056bc10(uVar5);
      uVar5 = FUN_0056bc10(0xbd563be5,uVar5);
      FUN_005252d0(uVar3,0x68215623,uVar5);
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x73dcb662);
      FUN_00514c70(uVar3);
    }
    uVar3 = FUN_0056e560("TRACKNAME_",*(undefined4 *)(param_1 + 0x108));
    cVar2 = FUN_0056bc00(uVar3);
    if (cVar2 == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_005fba70();
      FUN_005252d0(uVar3,0x5e7b09c9,uVar5);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = FUN_005fba70();
      FUN_005252d0(uVar3,0xdfb7a2e,uVar5);
    }
    else {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x5e7b09c9,uVar3);
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xdfb7a2e,uVar3);
    }
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xbbf970cd);
    FUN_00514c70(uVar3);
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
      uVar3 = FUN_0056bc10(0x8569a26a);
      uVar5 = FUN_0056bc10(0x8569a25f);
      local_84 = 1000.0;
    }
    else {
      uVar3 = FUN_0056bc10(0x867dcfd9);
      uVar5 = FUN_0056bc10(0x8569ab44);
      local_84 = 1609.34;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    fVar7 = (float10)FUN_005fb850(uVar3);
    FUN_005252d0(uVar1,0xb5154999,"%$0.1f %s",(double)(fVar7 / (float10)local_84));
    uVar3 = FUN_005fab40();
    iVar4 = FUN_005dca40(uVar3);
    iVar6 = FUN_005faa20();
    if ((((iVar6 == 0) || (iVar6 = FUN_005faa20(), iVar6 == 1)) ||
        (iVar6 = FUN_005faa20(), iVar6 == 2)) ||
       ((iVar6 = FUN_005faa20(), iVar6 == 3 || (iVar6 = FUN_005faa20(), iVar6 == 4)))) {
      FUN_007c4b80();
      FUN_006547a0(local_80,0);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb515499c,&DAT_008941f8,local_80);
    }
    else {
      iVar6 = FUN_005faa20();
      if (iVar6 == 5) {
        if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
          local_84 = *(float *)(iVar4 + 8);
        }
        else {
          local_84 = *(float *)(iVar4 + 8) * _DAT_008a0294 * _DAT_008967e0;
        }
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x28462c64,0x512e823);
        FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb515499c,"%$0.0f %s",(double)local_84,uVar5);
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = FUN_0056bc10(0x472aa00a);
        FUN_005252d0(uVar3,0xb515499c,&DAT_008941f8,uVar5);
      }
    }
    iVar4 = FUN_005faa20();
    if ((iVar4 == 1) || (iVar4 = FUN_005faa20(), iVar4 == 3)) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x28462c64,0xc5b5a177);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = FUN_005faa20();
    uVar5 = FUN_0056e090(uVar5);
    uVar3 = FUN_005251a0(uVar3,0x8007b4c,uVar5);
    FUN_00515b90(uVar3);
    return;
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x6f25a248,&DAT_0089ddf0);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb2037bdc,&DAT_0089ddf0);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x5e7b09c9,&DAT_00890978);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xdfb7a2e,&DAT_00890978);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb5154999,&DAT_0089c328);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = FUN_0056bc10(0x472aa00a);
  FUN_005252d0(uVar3,0xb515499c,&DAT_008941f8,uVar5);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x68215623,0xf9c0519a);
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x73dcb662);
  FUN_00514c70(uVar3);
  return;
}

