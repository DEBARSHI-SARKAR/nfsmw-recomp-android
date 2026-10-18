/* speed.exe 0053952b FUN_0053952b; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 005fba70 FUN_005fba70
 * calls 0056bc00 FUN_0056bc00
 * calls 0056e560 FUN_0056e560
 * calls 005252d0 FUN_005252d0
 * calls 005fb710 FUN_005fb710
 * calls 00516af0 FUN_00516af0
 * calls 0083abc0 FUN_0083abc0
 * calls 0056bc10 FUN_0056bc10
 * calls 005fb850 FUN_005fb850
 * calls 0083a670 FUN_0083a670
 * calls 005faa20 FUN_005faa20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053952b(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int in_EAX;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  float10 fVar9;
  int unaff_retaddr;
  uint uVar10;
  
  FUN_0083a670(in_EAX + 0x90,&DAT_0089dcd0,0);
  uVar4 = FUN_0083abc0();
  uVar4 = FUN_005fb710(uVar4);
  uVar5 = FUN_005faa20();
  switch(uVar5) {
  case 0:
    uVar5 = 0xb94fd70e;
    iVar8 = 0x2521e5eb;
    break;
  case 1:
    uVar5 = 0x34fa2c1;
    iVar8 = -0x169c72c2;
    break;
  case 2:
    uVar5 = 0x6f547e4c;
    iVar8 = -0x5554ce17;
    break;
  case 3:
    uVar5 = 0x4930f5fc;
    goto LAB_0053959e;
  default:
    uVar5 = 0x1b01cc;
LAB_0053959e:
    iVar8 = 0x3a015595;
  }
  if ((((*(int *)(param_2 + 0x10) != 0) &&
       (iVar6 = FUN_00516af0(*(int *)(param_2 + 0x10)), iVar6 != 0)) &&
      (iVar6 = FUN_005b8550(0xceb82625), iVar6 != 0)) &&
     ((*(int *)(iVar6 + 0x18) == 1 && (*(int *)(iVar6 + 0x24) != iVar8)))) {
    *(int *)(iVar6 + 0x24) = iVar8;
    *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x2400000;
  }
  FUN_00525220(*(undefined4 *)(param_2 + 0x10),0x4b4e3888,uVar5);
  uVar4 = FUN_0056e560("TRACKNAME_",uVar4);
  cVar1 = FUN_0056bc00(uVar4);
  if (cVar1 == '\0') {
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = FUN_005fba70();
    FUN_005252d0(uVar4,0x4b4e3889,uVar5);
  }
  else {
    FUN_00525220(*(undefined4 *)(param_2 + 0x10),0x4b4e3889,uVar4);
  }
  FUN_0083a670(unaff_retaddr + 0x90,&DAT_0089dda0,0);
  uVar2 = FUN_0083abc0();
  FUN_005252d0(*(undefined4 *)(param_2 + 0x10),0x4b4e388a,&DAT_0089d764,uVar2);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  if ((*(uint *)(unaff_retaddr + 0xc) & 0x200) == 0) {
    uVar5 = 0x417b25e4;
  }
  else {
    uVar5 = 0x70e01038;
  }
  uVar5 = FUN_0056bc10(uVar5);
  FUN_005252d0(uVar4,0x4b4e388b,uVar5);
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    uVar5 = FUN_0056bc10(0x8569a26a);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    fVar9 = (float10)FUN_005fb850(uVar5);
    fVar9 = fVar9 * (float10)_DAT_00890d60;
  }
  else {
    uVar5 = FUN_0056bc10(0x867dcfd9);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    fVar9 = (float10)FUN_005fb850(uVar5);
    fVar9 = fVar9 * (float10)_DAT_0089dcc8;
  }
  FUN_005252d0(uVar4,0x4b4e388c,"%$0.1f %s",(double)fVar9);
  FUN_0083a670(unaff_retaddr + 0x90,&DAT_0089dccc,0);
  bVar3 = FUN_0083abc0();
  uVar10 = (uint)bVar3;
  iVar8 = FUN_005faa20();
  if (iVar8 == 1) {
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    puVar7 = &DAT_0089d764;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    uVar10 = 0x7f2f7ad6;
    puVar7 = (undefined *)FUN_0056bc10(0x7f2f7ad6);
  }
  FUN_005252d0(uVar4,CONCAT44(puVar7,0x4b4e388d),uVar10);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  if ((*(uint *)(unaff_retaddr + 0xc) & 0x800) == 0) {
    uVar5 = 0x70dfe5c2;
  }
  else {
    uVar5 = 0x417b2604;
  }
  uVar5 = FUN_0056bc10(uVar5);
  FUN_005252d0(uVar4,0x4b4e388e,uVar5);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  if (*(char *)(DAT_0091cf90 + 0x15f) == '\0') {
    uVar5 = 0x70dfe5c2;
  }
  else {
    uVar5 = 0x417b2604;
  }
  uVar5 = FUN_0056bc10(uVar5);
  FUN_005252d0(uVar4,0x4b4e388f,uVar5);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  if ((*(uint *)(unaff_retaddr + 0xc) & 0x400) == 0) {
    uVar5 = 0x70dfe5c2;
  }
  else {
    uVar5 = 0x417b2604;
  }
  uVar5 = FUN_0056bc10(uVar5);
  FUN_005252d0(uVar4,0x4b4e3890,uVar5);
  return;
}

