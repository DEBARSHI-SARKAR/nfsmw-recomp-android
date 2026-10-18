/* speed.exe 0083df40 FUN_0083df40; analysis pseudocode, not buildable source.
 * calls 0083db90 FUN_0083db90
 */

char * FUN_0083df40(int param_1,int param_2,char *param_3,char param_4,uint *param_5)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  ushort local_8;
  
  cVar2 = *param_3;
  pcVar8 = (char *)0x0;
  iVar9 = 0;
  do {
    if ((cVar2 == '\0') || (param_2 + -1 <= (int)pcVar8)) {
      pcVar8[param_1] = '\0';
      return pcVar8 + 1;
    }
    iVar3 = FUN_0083db90();
    iVar9 = iVar9 + iVar3;
    puVar6 = param_5 + 1;
    pcVar4 = pcVar8 + param_1;
    if (param_5[1] != 0) {
      puVar7 = param_5;
      do {
        if ((*puVar7 <= (uint)local_8) && ((uint)local_8 <= *puVar6)) {
          cVar2 = *(char *)((uint)(ushort)(local_8 - (short)*puVar7) + puVar7[2]);
          if ((cVar2 == -1) && (param_4 != '\0')) goto LAB_0083dfbc;
          *pcVar4 = cVar2;
          goto LAB_0083dfbe;
        }
        puVar1 = puVar7 + 4;
        puVar6 = puVar7 + 4;
        puVar7 = puVar7 + 3;
      } while (*puVar1 != 0);
    }
    pcVar5 = pcVar4;
    if (param_4 != '\0') {
LAB_0083dfbc:
      *pcVar4 = param_4;
LAB_0083dfbe:
      pcVar5 = pcVar4 + 1;
    }
    pcVar8 = pcVar5 + ((int)pcVar8 - (int)pcVar4);
    cVar2 = param_3[iVar9];
  } while( true );
}

