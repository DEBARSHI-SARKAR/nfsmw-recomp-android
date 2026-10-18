/* speed.exe 005a29b0 FUN_005a29b0; analysis pseudocode, not buildable source.
 * calls 005fb990 FUN_005fb990
 * calls 005edc60 FUN_005edc60
 * calls 0057fdc0 FUN_0057fdc0
 * calls 0057d750 FUN_0057d750
 * calls 005fbb60 FUN_005fbb60
 * calls 005fbe70 FUN_005fbe70
 * calls 005fb8b0 FUN_005fb8b0
 * calls 005fa9a0 FUN_005fa9a0
 * calls 004647e0 FUN_004647e0
 * calls 00599740 FUN_00599740
 * calls 0056dc00 FUN_0056dc00
 * calls 0056a5e0 FUN_0056a5e0
 * calls 0056bc60 FUN_0056bc60
 */

undefined4 __fastcall FUN_005a29b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  iVar3 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar3;
  if (((iVar3 < 1) && (DAT_0091e000 != 0)) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    cVar1 = FUN_005fbe70();
    if (cVar1 != '\0') {
      cVar1 = FUN_0056dc00();
      if (cVar1 == '\0') {
        uVar2 = FUN_005fa9a0();
        fVar4 = (float10)FUN_005edc60(uVar2);
        fVar5 = (float)fVar4;
        fVar4 = (float10)FUN_005fbb60();
        fVar6 = (float)fVar4;
        uVar7 = 0;
        uVar2 = FUN_005fa9a0(fVar5,fVar6,0);
        FUN_00599740(local_60,uVar2,fVar5,fVar6,uVar7);
        uVar2 = FUN_005fb990(local_60);
        uVar2 = FUN_0057fdc0(uVar2);
        uVar2 = FUN_0056bc60(uVar2);
        FUN_004647e0(local_40,0x40,"%s: %s",uVar2);
        puVar8 = local_40;
        iVar3 = FUN_005fb8b0(puVar8);
        fVar5 = (float)iVar3;
        uVar2 = FUN_005fa9a0(fVar5);
        FUN_0057d750(1,uVar2,fVar5,puVar8);
        return 1;
      }
    }
  }
  FUN_0056a5e0();
  return 0;
}

