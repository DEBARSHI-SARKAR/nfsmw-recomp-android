/* speed.exe 00539510 FUN_00539510; analysis pseudocode, not buildable source.
 * calls 0079bac0 FUN_0079bac0
 * calls 0078bcc0 FUN_0078bcc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00539510(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  float10 fVar10;
  uint uVar11;
  
  FUN_0079bac0(param_1);
  iVar4 = FUN_0078bcc0();
  if (iVar4 == 0) {
    DAT_008f32fc = 0;
    return;
  }
  FUN_0083a670(iVar4 + 0x90,&DAT_0089dcd0,0);
  uVar5 = FUN_0083abc0();
  uVar5 = FUN_005fb710(uVar5);
  uVar6 = FUN_005faa20();
  switch(uVar6) {
  case 0:
    uVar6 = 0xb94fd70e;
    iVar9 = 0x2521e5eb;
    break;
  case 1:
    uVar6 = 0x34fa2c1;
    iVar9 = -0x169c72c2;
    break;
  case 2:
    uVar6 = 0x6f547e4c;
    iVar9 = -0x5554ce17;
    break;
  case 3:
    uVar6 = 0x4930f5fc;
    goto LAB_0053959e;
  default:
    uVar6 = 0x1b01cc;
LAB_0053959e:
    iVar9 = 0x3a015595;
  }
  if ((((*(int *)(param_2 + 0x10) != 0) &&
       (iVar7 = FUN_00516af0(*(int *)(param_2 + 0x10)), iVar7 != 0)) &&
      (iVar7 = FUN_005b8550(0xceb82625), iVar7 != 0)) &&
     ((*(int *)(iVar7 + 0x18) == 1 && (*(int *)(iVar7 + 0x24) != iVar9)))) {
    *(int *)(iVar7 + 0x24) = iVar9;
    *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x2400000;
  }
  FUN_00525220(*(undefined4 *)(param_2 + 0x10),0x4b4e3888,uVar6);
  uVar5 = FUN_0056e560("TRACKNAME_",uVar5);
  cVar1 = FUN_0056bc00(uVar5);
  if (cVar1 == '\0') {
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = FUN_005fba70();
    FUN_005252d0(uVar5,0x4b4e3889,uVar6);
  }
  else {
    FUN_00525220(*(undefined4 *)(param_2 + 0x10),0x4b4e3889,uVar5);
  }
  iVar9 = iVar4 + 0x90;
  FUN_0083a670(iVar9,&DAT_0089dda0,0);
  uVar2 = FUN_0083abc0();
  FUN_005252d0(*(undefined4 *)(param_2 + 0x10),0x4b4e388a,&DAT_0089d764,uVar2);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  if ((*(uint *)(iVar4 + 0xc) & 0x200) == 0) {
    uVar6 = 0x417b25e4;
  }
  else {
    uVar6 = 0x70e01038;
  }
  uVar6 = FUN_0056bc10(uVar6);
  FUN_005252d0(uVar5,0x4b4e388b,uVar6);
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    uVar6 = FUN_0056bc10(0x8569a26a);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    fVar10 = (float10)FUN_005fb850(uVar6);
    fVar10 = fVar10 * (float10)_DAT_00890d60;
  }
  else {
    uVar6 = FUN_0056bc10(0x867dcfd9);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    fVar10 = (float10)FUN_005fb850(uVar6);
    fVar10 = fVar10 * (float10)_DAT_0089dcc8;
  }
  FUN_005252d0(uVar5,0x4b4e388c,"%$0.1f %s",(double)fVar10);
  FUN_0083a670(iVar9,&DAT_0089dccc,0);
  bVar3 = FUN_0083abc0();
  uVar11 = (uint)bVar3;
  iVar9 = FUN_005faa20();
  if (iVar9 == 1) {
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    puVar8 = &DAT_0089d764;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar11 = 0x7f2f7ad6;
    puVar8 = (undefined *)FUN_0056bc10(0x7f2f7ad6);
  }
  FUN_005252d0(uVar5,CONCAT44(puVar8,0x4b4e388d),uVar11);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  if ((*(uint *)(iVar4 + 0xc) & 0x800) == 0) {
    uVar6 = 0x70dfe5c2;
  }
  else {
    uVar6 = 0x417b2604;
  }
  uVar6 = FUN_0056bc10(uVar6);
  FUN_005252d0(uVar5,0x4b4e388e,uVar6);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  if (*(char *)(DAT_0091cf90 + 0x15f) == '\0') {
    uVar6 = 0x70dfe5c2;
  }
  else {
    uVar6 = 0x417b2604;
  }
  uVar6 = FUN_0056bc10(uVar6);
  FUN_005252d0(uVar5,0x4b4e388f,uVar6);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  if ((*(uint *)(iVar4 + 0xc) & 0x400) == 0) {
    uVar6 = 0x70dfe5c2;
  }
  else {
    uVar6 = 0x417b2604;
  }
  uVar6 = FUN_0056bc10(uVar6);
  FUN_005252d0(uVar5,0x4b4e3890,uVar6);
  return;
}

