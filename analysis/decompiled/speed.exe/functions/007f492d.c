/* speed.exe 007f492d FUN_007f492d; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007f4137 FUN_007f4137
 * calls 0085e0a0 FUN_0085e0a0
 * calls 007f66a8 FUN_007f66a8
 * calls 007f4275 FUN_007f4275
 * calls 007f3e78 FUN_007f3e78
 * calls 007f62af FUN_007f62af
 * calls 007c6100 _sprintf
 */

void __fastcall FUN_007f492d(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  bool bVar7;
  char local_24c [260];
  char local_148 [260];
  char local_44 [64];
  
  _sprintf(local_148,"%s/%s",param_1 + 0x18c,param_1 + 0x14c);
  FUN_007f4137();
  FUN_007f4275(local_148);
  iVar2 = *(int *)(param_1 + 0x294);
  do {
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
      if (*(int *)(param_1 + 0x2fc) == 0) {
        cVar1 = *(char *)(param_1 + 0x130);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x2f0);
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
      iVar2 = (-(uint)(cVar1 != '\0') & 0xfffffff7) + 9;
      *(int *)(param_1 + 0x2f8) = iVar2;
      FUN_007f66a8(0,iVar2,0);
      return;
    }
    if (*(int *)(param_1 + 700) == 1) {
      iVar2 = 2;
      bVar7 = true;
      *(undefined1 *)(param_1 + 0x2f0) = 0;
      pcVar3 = ".";
      pcVar5 = *(char **)(param_1 + 0x298);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = *pcVar3 == *pcVar5;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar7);
      if (!bVar7) {
        iVar2 = 3;
        bVar7 = true;
        pcVar3 = "..";
        pcVar5 = *(char **)(param_1 + 0x298);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar7 = *pcVar3 == *pcVar5;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar7);
        if (!bVar7) {
          pcVar3 = (char *)(param_1 + 0x14c);
          *(undefined1 *)(param_1 + 0x130) = 1;
          pcVar5 = pcVar3;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 4;
          }
          puVar4 = (undefined4 *)(param_1 + 0x16c);
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          _strncpy(pcVar3,*(char **)(param_1 + 0x298),0x1f);
          if (*(int *)(param_1 + 0x2fc) == 0) {
            pcVar5 = (char *)(param_1 + 0xb4);
            for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
              pcVar5[0] = '\0';
              pcVar5[1] = '\0';
              pcVar5[2] = '\0';
              pcVar5[3] = '\0';
              pcVar5 = pcVar5 + 4;
            }
            _strncpy((char *)(param_1 + 0xb4),pcVar3,0x1f);
          }
          FUN_007f3e78();
          _sprintf(local_24c,"%s/%s/%s",param_1 + 0x18c,pcVar3,param_1 + 0xb4);
          FUN_007f4137();
          FUN_007f4275(local_24c);
          if ((*(int *)(param_1 + 0x2c4) == 0) && (*(int *)(param_1 + 0x2ec) == 0)) {
            _strncpy((char *)(param_1 + 0x16c),*(char **)(param_1 + 0x2c8),0x1f);
            puVar4 = (undefined4 *)(param_1 + 0x2c8);
            puVar6 = (undefined4 *)(param_1 + 0xd8);
            for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            *(undefined1 *)(param_1 + 0x2f0) = 1;
            FUN_0085e0a0(*(undefined4 *)(param_1 + 0x2c0));
            *(undefined4 *)(param_1 + 0x2c0) = 0;
          }
          if (*(int *)(param_1 + 0x2fc) == 0) {
            pcVar3 = (char *)(param_1 + 0x14c);
          }
          else {
            if (*(char *)(param_1 + 0x2f0) == '\0') goto LAB_007f4b03;
            pcVar3 = local_44;
            for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar3 + 4;
            }
            _sprintf(local_44,"%s/%s",param_1 + 0x14c,param_1 + 0x16c);
            pcVar3 = local_44;
          }
          *(int *)(param_1 + 0xd8) = (int)pcVar3;
          FUN_007f62af((int *)(param_1 + 0xd8));
        }
      }
    }
LAB_007f4b03:
    FUN_007f4275(local_148);
    iVar2 = *(int *)(param_1 + 0x294);
  } while( true );
}

