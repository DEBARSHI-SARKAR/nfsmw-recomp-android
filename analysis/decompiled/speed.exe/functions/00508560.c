/* speed.exe 00508560 FUN_00508560; analysis pseudocode, not buildable source.
 * calls 00500b50 FUN_00500b50
 * calls 00462830 FUN_00462830
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004655f0 FUN_004655f0
 * calls 00464080 FUN_00464080
 * calls 0064ad40 FUN_0064ad40
 * calls 00500d80 FUN_00500d80
 * calls 004fb210 FUN_004fb210
 * calls 00465a70 FUN_00465a70
 */

void __thiscall
FUN_00508560(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int ****ppppiVar11;
  int *piVar12;
  int local_24;
  uint local_20;
  int ***local_14;
  int ***local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_8 = &LAB_0086dee8;
  local_c = ExceptionList;
  iVar6 = 0;
  pcVar10 = (char *)((int)&DAT_00915b70 + 1);
  do {
    if (*pcVar10 == '\0') {
      iVar7 = iVar6 * 0x10;
      puVar1 = &DAT_00915b70 + iVar6 * 4;
      ExceptionList = &local_c;
      *(undefined4 *)(iVar7 + 0x915b7c) = param_1;
      *(undefined1 *)((int)&DAT_00915b70 + iVar7 + 1) = 1;
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined1 *)puVar1 = (undefined1)param_6;
        local_14 = (int ***)&local_14;
        (&DAT_00915b74)[iVar6 * 4] = param_4;
        *(undefined4 *)(iVar7 + 0x915b78) = param_5;
        local_4 = 0;
        local_10 = local_14;
        iVar6 = FUN_00465a70(param_3 * 0x14,0x40);
        local_20 = 0x7fffffff;
        local_24 = 0;
        if (0 < param_3) {
          piVar12 = (int *)(iVar6 + 8);
          do {
            uVar2 = *(undefined4 *)(param_2 + local_24 * 4);
            iVar8 = FUN_00500b50(uVar2);
            if ((((iVar8 != 0) && (*(char *)(iVar8 + 0xe) == '\0')) && (*(int *)(iVar8 + 0x24) != 0)
                ) && (iVar9 = FUN_004fb210(uVar2,*(int *)(iVar8 + 0x24),
                                           *(undefined4 *)(iVar8 + 0x28),0,0x18), iVar9 != 0)) {
              uVar3 = *(uint *)(iVar9 + 4);
              piVar12[1] = iVar9;
              piVar12[2] = uVar3;
              *piVar12 = iVar8;
              if (uVar3 < local_20) {
                local_20 = uVar3;
              }
              ppppiVar11 = (int ****)(piVar12 + -2);
              *local_10 = (int **)ppppiVar11;
              piVar12[-1] = (int)local_10;
              *ppppiVar11 = (int ***)&local_14;
              piVar12 = piVar12 + 5;
              local_10 = (int ***)ppppiVar11;
            }
            local_24 = local_24 + 1;
          } while (local_24 < param_3);
        }
        if (param_6 == 0) {
          FUN_00464080(0);
        }
        FUN_00462830(&LAB_004fb4f0);
        ppppiVar11 = (int ****)local_14;
        if ((int ****)local_14 != &local_14) {
          do {
            FUN_00500d80(puVar1,ppppiVar11[2],ppppiVar11[3]);
            ppppiVar11 = (int ****)*ppppiVar11;
          } while (ppppiVar11 != &local_14);
        }
        local_14 = (int ***)&local_14;
        local_10 = local_14;
        FUN_004655f0(iVar6);
        if ((*(short *)((int)&DAT_00915b70 + iVar7 + 2) == 0) && (param_4 != 0)) {
          *(undefined1 *)((int)&DAT_00915b70 + iVar7 + 1) = 0;
          FUN_0064ad40(param_4,param_5);
        }
        if ((int ****)local_14 != &local_14) {
          do {
            pppiVar4 = (int ***)*local_14;
            pppiVar5 = (int ***)local_14[1];
            *pppiVar5 = (int **)pppiVar4;
            pppiVar4[1] = (int **)pppiVar5;
            thunk_FUN_007c7250(local_14);
          } while ((int ****)local_14 != &local_14);
        }
      }
      ExceptionList = local_c;
      return;
    }
    pcVar10 = pcVar10 + 0x10;
    iVar6 = iVar6 + 1;
  } while ((int)pcVar10 < 0x915f71);
  return;
}

