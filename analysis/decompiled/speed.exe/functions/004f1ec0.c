/* speed.exe 004f1ec0 FUN_004f1ec0; analysis pseudocode, not buildable source.
 * calls 0065aed0 FUN_0065aed0
 * calls 0065f740 FUN_0065f740
 * calls 0065f680 FUN_0065f680
 * calls 0065f830 FUN_0065f830
 * calls 00652ad0 _malloc
 * calls 004ac040 FUN_004ac040
 */

void __thiscall FUN_004f1ec0(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x34) = 0;
  puVar2 = _malloc(0x1e0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00898b9c;
    puVar2[0x17] = 0;
    puVar2[0x19] = 0;
    puVar2[0x77] = 0x3f800000;
    puVar2[0x76] = 0x3f800000;
  }
  *(undefined4 **)(param_1 + 0x28) = puVar2;
  puVar1 = (&PTR_s_SOUND_MixMaps_MAPOUTPUT_mxb_008f0394)[param_2];
  uVar3 = FUN_0065f740(puVar1);
  uVar4 = FUN_004ac040(uVar3,"Main Dyn MixMap",0);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar5 = FUN_0065f680(puVar1,1,1);
  if (iVar5 != 0) {
    FUN_0065f830(iVar5,uVar4,uVar3);
    FUN_0065aed0(iVar5);
  }
  return;
}

