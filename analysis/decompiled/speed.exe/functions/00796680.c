/* speed.exe 00796680 FUN_00796680; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 004647c0 FUN_004647c0
 * calls 0083a980 FUN_0083a980
 * calls 00460c50 FUN_00460c50
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0064bab0 FUN_0064bab0
 * calls 0083c880 FUN_0083c880
 * calls 0064baa0 thunk_FUN_0064a1e0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 FUN_00796680(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_328;
  undefined2 local_327;
  int local_324;
  char *local_320;
  undefined1 local_31c;
  undefined4 local_31b;
  undefined4 local_317;
  undefined4 local_313;
  undefined2 local_30f;
  undefined1 local_30d;
  int local_30c;
  undefined1 local_308;
  undefined4 local_307;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar2 = FUN_00460c50(param_1);
  if (3 < iVar2) {
    iVar2 = FUN_00460c50(param_1);
    if (iVar2 < 0x11) {
      iVar2 = param_1 + 0x14;
      local_30c = iVar2;
      iVar3 = FUN_00460c50(iVar2);
      if (3 < iVar3) {
        iVar2 = FUN_00460c50(iVar2);
        if (iVar2 < 0x11) {
          iVar2 = param_1 + 0x28;
          local_324 = iVar2;
          iVar3 = FUN_00460c50(iVar2);
          if (6 < iVar3) {
            iVar2 = FUN_00460c50(iVar2);
            if ((((iVar2 < 0x33) && (0 < *(int *)(param_1 + 0x5c))) &&
                (*(int *)(param_1 + 0x5c) < 0x20)) &&
               ((0 < *(int *)(param_1 + 0x60) && (*(int *)(param_1 + 0x60) < 0xd)))) {
              pcVar1 = (char *)(param_1 + 0x6b);
              local_320 = pcVar1;
              if (*(char *)(param_1 + 0x6b) == '\0') {
LAB_0079677f:
                local_31b = 0;
                local_317 = 0;
                local_313 = 0;
                local_30f = 0;
                local_30d = 0;
                local_31c = 0;
                FUN_004647c0(&local_31c,"%04d%02d%02d",*(undefined4 *)(param_1 + 100),
                             *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x5c));
                local_32c = 0;
                local_32b = 0;
                FUN_004647c0(&local_32c,&DAT_008a0d7c,
                             (int)(char)(((*(char *)(param_1 + 0x68) != '\x01') - 1U & 7) + 0x46));
                local_328 = 0;
                local_327 = 0;
                FUN_004647c0(&local_328,&DAT_008b6d38,
                             (int)(char)(((*(char *)(param_1 + 0x69) != '\x01') - 1U & 0xb) + 0x4e),
                             (int)(char)(((*(char *)(param_1 + 0x6a) != '\x01') - 1U & 0xb) + 0x4e))
                ;
                local_308 = 0;
                puVar5 = &local_307;
                for (iVar2 = 0xbf; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar5 = 0;
                  puVar5 = puVar5 + 1;
                }
                *(undefined2 *)puVar5 = 0;
                *(undefined1 *)((int)puVar5 + 2) = 0;
                FUN_0083c880(&local_308,0x300,&DAT_008b4cbc,param_1);
                FUN_0083c880(&local_308,0x300,&DAT_008b6d24,local_30c);
                FUN_0083c880(&local_308,0x300,&DAT_008b6eec,local_324);
                FUN_0083c880(&local_308,0x300,&DAT_008b6ee4,&local_31c);
                FUN_0083c880(&local_308,0x300,&DAT_008b6edc,&local_32c);
                FUN_0083c880(&local_308,0x300,&DAT_008b6d30,&local_328);
                iVar2 = FUN_0064bab0();
                if (iVar2 != 0) {
                  uVar4 = FUN_0064bab0();
                  FUN_0083c880(&local_308,0x300,&DAT_008b6de0,uVar4);
                }
                iVar2 = thunk_FUN_0064a1e0();
                if (iVar2 != 0) {
                  uVar4 = thunk_FUN_0064a1e0();
                  FUN_0083c880(&local_308,0x300,&DAT_008b6dd8,uVar4);
                }
                if (*local_320 != '\0') {
                  FUN_0083c880(&local_308,0x300,"PMAIL",local_320);
                }
                FUN_0083a980(&local_308,0x300,&PTR_LAB_008b6d2c,1);
                uVar9 = 0;
                uVar8 = 0;
                puVar7 = &LAB_00794ff0;
                puVar6 = &local_308;
                uVar4 = 0x61636374;
                FUN_00794f80(0x61636374,puVar6,&LAB_00794ff0,0,param_2,param_3,0);
                uVar4 = FUN_00793340(uVar4,puVar6,puVar7,uVar8,param_2,param_3,uVar9);
                InterlockedDecrement(&DAT_009b4438);
                FUN_007ec1c8();
                return uVar4;
              }
              iVar2 = FUN_00460c50(pcVar1);
              if (6 < iVar2) {
                iVar2 = FUN_00460c50(pcVar1);
                if (iVar2 < 0x33) goto LAB_0079677f;
              }
            }
          }
        }
      }
    }
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0xffffffff;
}

