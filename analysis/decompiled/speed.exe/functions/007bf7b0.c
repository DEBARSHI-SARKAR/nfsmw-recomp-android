/* speed.exe 007bf7b0 FUN_007bf7b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0056ecf0 FUN_0056ecf0
 * calls 00462830 FUN_00462830
 * calls 0056f180 FUN_0056f180
 * calls 0058a9f0 FUN_0058a9f0
 * calls 007b4e20 FUN_007b4e20
 * calls 007a3df0 FUN_007a3df0
 * calls 007b4f60 FUN_007b4f60
 * calls 0056e2b0 FUN_0056e2b0
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_007bf7b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_c;
  
  piVar1 = (int *)(param_1 + 0x2c);
  piVar6 = *(int **)(param_1 + 0x2c);
  while (piVar6 != piVar1) {
    iVar9 = *piVar6;
    piVar8 = (int *)piVar6[1];
    *piVar8 = iVar9;
    *(int **)(iVar9 + 4) = piVar8;
    thunk_FUN_007c7250(piVar6);
    piVar6 = (int *)*piVar1;
  }
  if ((*(byte *)(param_1 + 0x1ac) & 8) == 0) {
    iVar9 = 0;
    if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
      uVar2 = *(uint *)(DAT_0091cf90 + 300);
      if ((uVar2 >> 2 & 1) == 0) {
        if (((uVar2 >> 3 & 1) != 0) || (local_c = 1, (uVar2 >> 6 & 1) != 0)) {
          local_c = 7;
        }
      }
      else {
        local_c = 1;
      }
    }
    else {
      local_c = 2;
    }
    do {
      piVar6 = (int *)FUN_0056ecf0(iVar9);
      if ((*piVar6 != -1) && (cVar4 = FUN_0056f180(*(undefined4 *)(param_1 + 0x1ac)), cVar4 != '\0')
         ) {
        cVar4 = FUN_0058a9f0(local_c,*piVar6,*(undefined4 *)(param_1 + 0x1a8));
        iVar7 = FUN_0056e2b0();
        if ((iVar7 == 0) ||
           (cVar5 = FUN_007a3df0(piVar6,*(undefined4 *)(param_1 + 0x1ac)), cVar5 != '\0')) {
          piVar8 = _malloc(0x10);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8[2] = *piVar6;
            *(bool *)(piVar8 + 3) = cVar4 == '\0';
          }
          puVar3 = *(undefined4 **)(param_1 + 0x30);
          *puVar3 = piVar8;
          *(int **)(param_1 + 0x30) = piVar8;
          piVar8[1] = (int)puVar3;
          *piVar8 = (int)piVar1;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 200);
    switch(*(uint *)(param_1 + 0x1ac) & 0xffff) {
    case 1:
    case 2:
    case 8:
    case 0x10:
      FUN_00462830(&LAB_007ae450);
    }
    FUN_007b4e20(*(undefined4 *)(param_1 + 0x1a8));
    return;
  }
  FUN_007b4f60();
  return;
}

