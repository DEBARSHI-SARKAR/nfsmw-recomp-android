/* speed.exe 005566e0 FUN_005566e0; analysis pseudocode, not buildable source.
 * calls 00586ca0 FUN_00586ca0
 * calls 00523af0 FUN_00523af0
 * calls 00556540 FUN_00556540
 * calls 005252d0 FUN_005252d0
 */

void __thiscall FUN_005566e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x68));
  if (iVar2 == 1) {
    if (param_2 == 0) {
      uVar4 = *(uint *)(param_1 + 0xf8) & 0xffff;
      if (uVar4 == 1) {
        uVar4 = 8;
      }
      else {
        uVar4 = uVar4 >> 1;
      }
      *(uint *)(param_1 + 0xf8) = uVar4;
      FUN_00556540();
      piVar1 = *(int **)(param_1 + 0x2c);
      while (piVar1 == (int *)(param_1 + 0x2c)) {
        uVar4 = *(uint *)(param_1 + 0xf8) & 0xffff;
        if (uVar4 == 1) {
          uVar4 = 8;
        }
        else {
          uVar4 = uVar4 >> 1;
        }
        *(uint *)(param_1 + 0xf8) = uVar4;
        FUN_00556540();
        piVar1 = *(int **)(param_1 + 0x2c);
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xf8) & 0xffff;
      if (uVar4 == 8) {
        iVar2 = 1;
      }
      else {
        iVar2 = uVar4 << 1;
      }
      *(int *)(param_1 + 0xf8) = iVar2;
      FUN_00556540();
      piVar1 = *(int **)(param_1 + 0x2c);
      while (piVar1 == (int *)(param_1 + 0x2c)) {
        uVar4 = *(uint *)(param_1 + 0xf8) & 0xffff;
        if (uVar4 == 8) {
          iVar2 = 1;
        }
        else {
          iVar2 = uVar4 << 1;
        }
        *(int *)(param_1 + 0xf8) = iVar2;
        FUN_00556540();
        piVar1 = *(int **)(param_1 + 0x2c);
      }
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8);
    FUN_00523af0();
  }
  else if (iVar2 == 2) {
    piVar1 = (int *)(param_1 + 0x2c);
    if (param_2 == 0) {
      piVar3 = *(int **)(*(int *)(param_1 + 0x34) + 4);
      if (piVar3 == piVar1) {
        piVar3 = *(int **)(param_1 + 0x30);
      }
      *(int **)(param_1 + 0x34) = piVar3;
      piVar1 = (int *)(param_1 + 0xfc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0x100) + -1;
      }
    }
    else {
      piVar3 = (int *)**(undefined4 **)(param_1 + 0x34);
      if (piVar3 == piVar1) {
        piVar3 = (int *)*piVar1;
      }
      iVar2 = *(int *)(param_1 + 0xfc) + 1;
      *(int **)(param_1 + 0x34) = piVar3;
      *(int *)(param_1 + 0xfc) = iVar2;
      if (*(int *)(param_1 + 0x100) <= iVar2) {
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 0x34) + 8);
    FUN_00523af0();
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x6f25a248,&DAT_0089d764,*(int *)(param_1 + 0xfc) + 1
              );
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb2037bdc,&DAT_0089d764,
               *(undefined4 *)(param_1 + 0x100));
  return;
}

