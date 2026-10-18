/* speed.exe 007996b0 FUN_007996b0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083a670 FUN_0083a670
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 0083abc0 FUN_0083abc0
 * calls 00840c60 FUN_00840c60
 * calls 0083c050 FUN_0083c050
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056e340 FUN_0056e340
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall
FUN_007996b0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,float *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  float10 fVar5;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar2 = FUN_0056e340();
  iVar3 = FUN_00460d20(param_2,uVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_00794f80();
    if (*(int *)(iVar3 + 0x38) != 0) {
      iVar3 = FUN_00794f80(0x73656c66);
      iVar3 = FUN_00840c60(*(undefined4 *)(iVar3 + 0x38));
      if ((iVar3 != 0) && (pcVar4 = (char *)(iVar3 + 0xac), *pcVar4 != '\0')) {
LAB_0079972e:
        uVar2 = FUN_0083a670(pcVar4,&DAT_008b6fdc,0);
        uVar2 = FUN_0083abc0(uVar2);
        *param_3 = uVar2;
        uVar2 = FUN_0083a670(pcVar4,&DAT_008b6fd8,0);
        fVar5 = (float10)FUN_0083c050(uVar2);
        *param_4 = (float)fVar5;
        uVar2 = FUN_0083a670(pcVar4,&DAT_008b6fd4,0);
        fVar5 = (float10)FUN_0083c050(uVar2);
        param_4[1] = (float)fVar5;
        uVar2 = FUN_0083a670(pcVar4,&DAT_008b6fd0,0);
        fVar5 = (float10)FUN_0083c050(uVar2);
        param_4[2] = (float)fVar5;
        InterlockedDecrement(&DAT_009b4438);
        FUN_007ec1c8();
        return 1;
      }
    }
  }
  else {
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_1; puVar1 = (undefined4 *)*puVar1) {
      iVar3 = FUN_00460d20(puVar1 + 4,param_2);
      if (((iVar3 == 0) && (puVar1[0x93] == 0)) && (*(char *)(puVar1 + 0x2d) != '\0')) {
        pcVar4 = (char *)(puVar1 + 0x2d);
        goto LAB_0079972e;
      }
    }
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0;
}

