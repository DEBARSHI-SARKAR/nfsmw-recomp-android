/* speed.exe 005a28e0 FUN_005a28e0; analysis pseudocode, not buildable source.
 * calls 004647e0 FUN_004647e0
 * calls 00599740 FUN_00599740
 * calls 005e55a0 FUN_005e55a0
 * calls 0056a5e0 FUN_0056a5e0
 * calls 00573140 FUN_00573140
 * calls 0056bb80 FUN_0056bb80
 * calls 005ee220 FUN_005ee220
 * calls 0057d750 FUN_0057d750
 * calls 005e54f0 FUN_005e54f0
 */

undefined4 __fastcall FUN_005a28e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  iVar4 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar4;
  if ((iVar4 < 0x20) &&
     (puVar1 = *(undefined4 **)(&DAT_0091d404 + iVar4 * 4), puVar1 != (undefined4 *)0x0)) {
    uVar3 = puVar1[3];
    uVar2 = *puVar1;
    uVar6 = 0;
    fVar5 = (float10)FUN_005ee220(uVar3,0);
    FUN_00599740(local_60,uVar2,(float)fVar5,uVar3,uVar6);
    uVar3 = FUN_005e55a0();
    FUN_00573140("BLACKLIST_PURSUIT_MILESTONES_%02d_SHORT",uVar3);
    iVar4 = FUN_0056bb80();
    if (iVar4 == 0) {
      iVar4 = FUN_0056bb80();
    }
    FUN_004647e0(local_40,0x40,"%s: %s",iVar4,local_60);
    uVar3 = *puVar1;
    puVar7 = local_40;
    fVar5 = (float10)FUN_005e54f0(puVar7);
    FUN_0057d750(1,uVar3,(float)fVar5,puVar7);
    return 1;
  }
  FUN_0056a5e0();
  return 0;
}

