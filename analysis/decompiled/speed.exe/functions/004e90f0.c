/* speed.exe 004e90f0 FUN_004e90f0; analysis pseudocode, not buildable source.
 * calls 004ac040 FUN_004ac040
 */

void __fastcall FUN_004e90f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar1 = FUN_004ac040(*(int *)(*(int *)(param_1 + 0x38) + 4) << 2,"Dyn Mix Proc Array",0);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
  }
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x38) + 4)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 0x38) + 4));
  }
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x194) << 2,"Master Channel Input Array Block",0);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x19c) << 2,"Sub Channel Input Array Block",0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x1a4) << 6,"Master Channel Output Array Block",0);
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 100) * 0x60,"NFSMixMapState Object Memory",0);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    iVar3 = 0;
    do {
      *(undefined ***)(iVar3 + *(int *)(param_1 + 0x60)) = &PTR_LAB_00898bbc;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 100));
  }
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x80) << 2,"Scale Input Ptr Array Block",0);
  *(undefined4 *)(param_1 + 300) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x7c) << 4,"Curve Proc Data Array",0);
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x70) << 4,"NFSMixCtl Shared Data Array",0);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x17c) * 0xc,"NFSMixCtl Unique Data Array",0);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x17c) << 3,"NFSMixCtl Process Data Array",0);
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0xd8) * 0xc,"SubMix Shared Data Block",0);
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x184) << 3,"SubMix Unique Data Block",0);
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x184) << 3,"SubMix Proc Data Block",0);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0xdc) << 4,"MasterMix Shared Data Block",0);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x188) * 0x14,"MasterMix Unique Data Block",0);
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x188) << 3,"MasterMix Proc Data Block",0);
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0xe0) * 0x14,"3DMixCtl Shared Data Block",0);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x180) << 5,"3DMixCtl Unique Data Block",0);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x180) << 3,"3DMixCtl Proc Data Block",0);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0xe4) << 2,"EvtMixCtl Shared Data Block",0);
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x18c) << 5,"EvtMixCtl Unique Data Block",0);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  uVar1 = FUN_004ac040(*(int *)(param_1 + 0x18c) << 3,"EvtMixCtl Proc Data Block",0);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  return;
}

