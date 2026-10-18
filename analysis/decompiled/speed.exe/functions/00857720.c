/* speed.exe 00857720 FUN_00857720; analysis pseudocode, not buildable source.
 * calls 008572d0 FUN_008572d0
 */

uint __fastcall FUN_00857720(int param_1)

{
  int iVar1;
  int *in_EAX;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar3 = *(uint *)(param_1 + 0xd8);
  iVar1 = uVar3 + *(int *)(param_1 + 0xe0);
  uVar2 = iVar1 / *(int *)(param_1 + 0xdc);
  if (iVar1 % *(int *)(param_1 + 0xdc) != *(int *)(param_1 + 0xe4)) {
    uVar2 = in_EAX[2];
    if (*(uint *)(param_1 + 0xec) <= uVar2) {
      if (*(uint *)(param_1 + 0xec) < uVar2) {
        in_EAX[2] = 4;
        in_EAX[3] = *(int *)(param_1 + 0xec);
        *in_EAX = 0;
        uVar3 = FUN_008572d0();
        return uVar3;
      }
      if (*in_EAX != 0) {
        piVar4 = (int *)(*(int *)(param_1 + 0xe8) + *(int *)(param_1 + 0xe0));
        piVar5 = piVar4;
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar5 = *in_EAX;
          in_EAX = in_EAX + 1;
          piVar5 = piVar5 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(char *)piVar5 = (char)*in_EAX;
          in_EAX = (int *)((int)in_EAX + 1);
          piVar5 = (int *)((int)piVar5 + 1);
        }
        *(int *)(param_1 + 0x193c) = *(int *)(param_1 + 0x193c) + 1;
        *(int *)(param_1 + 0xe0) =
             (*(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xe0)) % *(int *)(param_1 + 0xdc);
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
        if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
          (**(code **)(param_1 + 0x3c))(param_1,piVar4 + 4,*piVar4,piVar4[1]);
        }
        uVar2 = *(int *)(param_1 + 0x193c) - 1;
        *(uint *)(param_1 + 0x193c) = uVar2;
        *(uint *)(param_1 + 0x1940) = *(uint *)(param_1 + 0x1940) | 1;
      }
    }
  }
  return uVar2;
}

