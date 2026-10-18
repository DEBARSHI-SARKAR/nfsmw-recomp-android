/* speed.exe 00798fe0 FUN_00798fe0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 00793340 FUN_00793340
 * calls 00460c70 FUN_00460c70
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls 00794790 FUN_00794790
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

int __thiscall FUN_00798fe0(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) && (*param_1 == '\0')) {
    iVar1 = FUN_00794790();
    iVar4 = 0;
    iVar3 = iVar1 + 4;
    if (0 < *(int *)(iVar1 + 0x84)) {
      do {
        iVar2 = FUN_00460d20(param_2,iVar3);
        if (iVar2 == 0) {
          local_40 = 0;
          puVar5 = &local_3f;
          for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          *(undefined2 *)puVar5 = 0;
          *(undefined1 *)((int)puVar5 + 2) = 0;
          FUN_0083c880(&local_40,0x40,&DAT_008b6d40,param_2);
          uVar10 = 0;
          pcVar8 = FUN_00796cc0;
          puVar7 = &local_40;
          uVar6 = 0x64706572;
          pcVar9 = param_1;
          FUN_00794f80(0x64706572,puVar7,FUN_00796cc0,param_1,param_3,param_4,0);
          iVar3 = FUN_00793340(uVar6,puVar7,pcVar8,pcVar9,param_3,param_4,uVar10);
          if (0 < iVar3) {
            FUN_00460c70(param_1,iVar4 * 0x20 + iVar1 + 4);
          }
          InterlockedDecrement(&DAT_009b4438);
          FUN_007ec1c8();
          return iVar3;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar4 < *(int *)(iVar1 + 0x84));
    }
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return -1;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return -1;
}

