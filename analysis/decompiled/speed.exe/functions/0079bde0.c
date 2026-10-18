/* speed.exe 0079bde0 FUN_0079bde0; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 0083b210 FUN_0083b210
 * calls 0083a670 FUN_0083a670
 * calls 0078c240 FUN_0078c240
 * calls 0083b8a0 FUN_0083b8a0
 * calls 00794f80 FUN_00794f80
 * calls 0079f090 FUN_0079f090
 * calls 00845290 FUN_00845290
 * calls 00840c60 FUN_00840c60
 * calls 0078b740 FUN_0078b740
 * calls 0056e340 FUN_0056e340
 * calls 007932c0 FUN_007932c0
 * calls 0079bac0 FUN_0079bac0
 * calls 0083abc0 FUN_0083abc0
 * calls 00460c70 FUN_00460c70
 * calls 00796d30 FUN_00796d30
 * calls 00791ea0 FUN_00791ea0
 * calls 007989e0 FUN_007989e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079bde0(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined2 local_17;
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((iVar1 == 0x67616d65) && (piVar5 = param_3 + 2, param_3[2] != -1)) {
    iVar1 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b4cbc);
    if (iVar1 == 0) {
      piVar6 = piVar5;
      for (iVar1 = 0x19d; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      *piVar5 = -1;
    }
    else {
      FUN_00845290(piVar5,*(undefined4 *)(param_2 + 0x10));
      piVar6 = piVar5;
      FUN_00796d30(piVar5);
      FUN_00791ea0(piVar6);
      FUN_00796d30();
      iVar1 = FUN_00794f80();
      if (*(int *)(iVar1 + 0x38) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00794f80(0x73656c66);
        iVar1 = FUN_00840c60(*(undefined4 *)(iVar1 + 0x38));
      }
      if (*(int *)(iVar1 + 0x130) == 0) {
        piVar6 = piVar5;
        for (iVar1 = 0x19d; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        *piVar5 = -1;
        FUN_0079f090(piVar5);
        FUN_007989e0(piVar5);
        return;
      }
    }
    FUN_0079f090();
    iVar1 = FUN_0078c240();
    if (0 < iVar1) {
      FUN_0079f090(piVar5);
      FUN_007989e0(piVar5);
    }
    iVar1 = FUN_0079bac0();
    if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
      (**(code **)(iVar1 + 0x14))(1,iVar1 + 0x1c,*(undefined4 *)(iVar1 + 0x18));
      return;
    }
  }
  else if (iVar1 == 0x706c6179) {
    iVar1 = FUN_0079bac0();
    if (((*(int *)(iVar1 + 0x1c) != -1) && (iVar1 != -0x1c)) && (param_3[2] != -1)) {
      FUN_00794f80();
      FUN_007932c0();
      FUN_00845290(param_3 + 2,*(undefined4 *)(param_2 + 0x10));
      FUN_0078b740();
      FUN_00460c70(&DAT_009b4708,param_3 + 0x60);
      DAT_009b4748 = param_3[0x5f];
      uVar2 = FUN_0056e340();
      FUN_00460c70(&DAT_009b474c,uVar2);
      iVar1 = 0;
      if (0 < param_3[0x85]) {
        piVar5 = param_3 + 0x88;
        puVar4 = &DAT_009b475c;
        do {
          FUN_00460c70(puVar4,piVar5);
          iVar1 = iVar1 + 1;
          piVar5 = piVar5 + 0x23;
          puVar4 = puVar4 + 0x10;
        } while (iVar1 < param_3[0x85]);
      }
      iVar1 = FUN_0079bac0();
      if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
        (**(code **)(iVar1 + 0x14))(4,iVar1 + 0x1c,*(undefined4 *)(iVar1 + 0x18));
        return;
      }
    }
  }
  else {
    if ((iVar1 == 0x24727570) && (*param_3 != 0)) {
      puVar7 = &DAT_009b9558;
      for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      iVar1 = 0;
      puVar7 = &DAT_009b9558;
      do {
        local_1f = 0;
        local_1b = 0;
        local_17 = 0;
        local_20 = 0;
        local_15 = 0;
        FUN_004647c0(&local_20,"OPPO%d",iVar1);
        uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&local_20,puVar7,0x14,&DAT_00890978);
        FUN_0083b210(uVar2);
        FUN_004647c0(&local_20,"STAT%d",iVar1);
        uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&local_20,0);
        uVar2 = FUN_0083abc0(uVar2);
        (&DAT_009b95fc)[iVar1] = uVar2;
        uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b6d00,0);
        _DAT_009b961c = FUN_0083abc0(uVar2);
        puVar7 = puVar7 + 5;
        iVar1 = iVar1 + 1;
      } while ((int)puVar7 < 0x9b95f8);
      DAT_009b95f8 = 0;
      (*(code *)*param_3)(&DAT_009b9558,param_3[1]);
      return;
    }
    if ((iVar1 == 0x2472666e) && (*param_3 != 0)) {
      puVar7 = &DAT_009b9558;
      for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      iVar1 = 0;
      puVar7 = &DAT_009b9558;
      do {
        local_1f = 0;
        local_1b = 0;
        local_17 = 0;
        local_20 = 0;
        local_15 = 0;
        FUN_004647c0(&local_20,"OPPO%d",iVar1);
        uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&local_20,puVar7,0x14,&DAT_00890978);
        iVar3 = FUN_0083b210(uVar2);
        if (0 < iVar3) {
          FUN_004647c0(&local_20,"DATA%d",iVar1);
          uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&local_20,&local_14,0x14,
                               &DAT_0089b350);
          FUN_0083b8a0(uVar2);
          (&DAT_009b9620)[iVar1] = local_14;
          (&DAT_009b9640)[iVar1] = local_10;
          (&DAT_009b9660)[iVar1] = local_c == 1;
          if (local_c != 1) {
            (&DAT_009b9668)[iVar1] = local_8;
          }
          (&DAT_009b9688)[iVar1] = local_4;
        }
        puVar7 = puVar7 + 5;
        iVar1 = iVar1 + 1;
      } while ((int)puVar7 < 0x9b95f8);
      DAT_009b95f8 = 1;
      (*(code *)*param_3)(&DAT_009b9558,param_3[1]);
    }
  }
  return;
}

