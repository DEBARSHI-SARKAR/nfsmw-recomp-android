/* speed.exe 005c4cb0 FUN_005c4cb0; analysis pseudocode, not buildable source.
 * calls 005b8d40 FUN_005b8d40
 * calls 005bc710 FUN_005bc710
 * calls 005c5180 FUN_005c5180
 * calls 005bc4d0 FUN_005bc4d0
 * calls 005b2380 FUN_005b2380
 * calls 005b2420 FUN_005b2420
 * calls 005c35b0 FUN_005c35b0
 * calls 005c4a30 FUN_005c4a30
 * calls 005b2320 FUN_005b2320
 */

int __thiscall
FUN_005c4cb0(int *param_1,int param_2,int param_3,int param_4,undefined1 param_5,undefined1 param_6,
            undefined1 param_7)

{
  char cVar1;
  int iVar2;
  
  *(undefined1 *)((int)param_1 + 9) = param_5;
  *(undefined1 *)(param_1 + 2) = param_7;
  *(undefined1 *)((int)param_1 + 10) = param_6;
  param_1[0xe] = param_3;
  iVar2 = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[1] = param_2;
  param_1[0xf] = param_4;
  cVar1 = FUN_005bc710();
  if (cVar1 != '\0') {
    cVar1 = FUN_005b2320();
    if (cVar1 != '\0') {
      cVar1 = FUN_005c5180();
      if (cVar1 != '\0') {
        cVar1 = FUN_005b2380();
        if (cVar1 != '\0') {
          cVar1 = FUN_005b2420();
          if (cVar1 != '\0') {
            cVar1 = FUN_005c4a30();
            if (cVar1 != '\0') {
              cVar1 = FUN_005c35b0();
              if (cVar1 != '\0') {
                cVar1 = FUN_005b8d40();
                if (cVar1 != '\0') {
                  *(char *)(*param_1 + 0x16) = (char)param_1[2];
                  cVar1 = FUN_005bc4d0(param_1[0xe]);
                  if (cVar1 != '\0') {
                    iVar2 = *param_1;
                    *param_1 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  *param_1 = 0;
  return iVar2;
}

