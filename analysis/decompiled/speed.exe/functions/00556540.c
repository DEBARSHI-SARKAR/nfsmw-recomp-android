/* speed.exe 00556540 FUN_00556540; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0056f180 FUN_0056f180
 * calls 00462830 FUN_00462830
 * calls 0056ecf0 FUN_0056ecf0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0058a9f0 FUN_0058a9f0
 * calls 005231f0 FUN_005231f0
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_00556540(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = 0;
  piVar1 = (int *)(param_1 + 0x2c);
  DAT_009b9d5c = 0;
  piVar5 = (int *)*piVar1;
  while (piVar5 != piVar1) {
    iVar2 = *piVar5;
    piVar6 = (int *)piVar5[1];
    *piVar6 = iVar2;
    *(int **)(iVar2 + 4) = piVar6;
    thunk_FUN_007c7250(piVar5);
    piVar5 = (int *)*piVar1;
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((*(uint *)(param_1 + 0xf8) & 8) == 0) {
    *(int *)(param_1 + 0x40) = *(int *)(DAT_0091cf90 + 0x10) + 0x414;
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 0xf0000;
    do {
      piVar5 = (int *)FUN_0056ecf0(iVar8);
      if (((*piVar5 != -1) && (cVar4 = FUN_0056f180(*(undefined4 *)(param_1 + 0xf8)), cVar4 != '\0')
          ) && (cVar4 = FUN_0058a9f0(7,*piVar5,0), cVar4 != '\0')) {
        piVar6 = _malloc(0x10);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6[2] = *piVar5;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        puVar3 = *(undefined4 **)(param_1 + 0x30);
        *puVar3 = piVar6;
        *(int **)(param_1 + 0x30) = piVar6;
        piVar6[1] = (int)puVar3;
        *piVar6 = (int)piVar1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 200);
  }
  else {
    FUN_005231f0();
  }
  uVar7 = FUN_0045d3a0(0);
  *(undefined4 *)(param_1 + 0x100) = uVar7;
  if ((int *)*piVar1 != piVar1) {
    switch(*(uint *)(param_1 + 0xf8) & 0xffff) {
    case 1:
    case 2:
    case 8:
    case 0x10:
      FUN_00462830(&LAB_007ae450);
    }
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(int *)(param_1 + 0x34) = *piVar1;
  }
  return;
}

