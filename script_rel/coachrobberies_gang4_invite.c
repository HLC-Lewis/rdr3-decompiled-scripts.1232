#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 24;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	char* sLocal_125 = NULL;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	float fLocal_129 = 0f;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	char[] cLocal_135[8] = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 60;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 1;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 11;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 1097859072;
	var uLocal_317 = 1101004800;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 4;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 24;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 1084227584;
	var uLocal_515 = 5;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 5;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 5;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 5;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 5;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 5;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = -1;
	var uLocal_610 = 0;
	var uLocal_611 = -1;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = -1;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 1073741824;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 1;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 1106247680;
	var uLocal_635 = 1067450368;
	var uLocal_636 = 0;
	var uLocal_637 = 1092616192;
	var uLocal_638 = 1112014848;
	var uLocal_639 = 1106247680;
	var uLocal_640 = 1101529088;
	var uLocal_641 = 1101004800;
	var uLocal_642 = 1084227584;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 1;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 570;
	var uLocal_673 = 1065353216;
	var uLocal_674 = -1082130432;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 3;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = -1;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 2;
	var uLocal_696 = 1;
	var uLocal_697 = 1;
	var uLocal_698 = 1;
	var uLocal_699 = 0;
	var uLocal_700 = 1;
	var uLocal_701 = 2;
	var uLocal_702 = 2;
	var uLocal_703 = 3;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 3;
	var uLocal_707 = 1;
	var uLocal_708 = 3;
	var uLocal_709 = 3;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = -589165916;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 1;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
	var uScriptParam_96 = 0;
	var uScriptParam_97 = 0;
	var uScriptParam_98 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_20 = { 1861.036f, -1829.247f, 42.2005f };
	fLocal_23 = 126.18f;
	fLocal_129 = 10f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		TASK::CLEAR_PED_TASKS(ScriptParam_0.f_1, 1, 0);
		func_1(&ScriptParam_0, &cLocal_135, 0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2(&ScriptParam_0, &cLocal_135))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, char* sParam1, bool bParam2)
{
	func_3(uParam0, sParam1);
	if (!bParam2)
	{
		func_4(*uParam0, -2147483642);
	}
	else
	{
		func_5(*uParam0, -2147483648, 0, 12);
	}
	if (func_6(uParam0->f_1, 0))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 389, false);
	}
	func_7(*uParam0, 51, 1);
	if (func_8(*uParam0))
	{
		func_9(*uParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		((*Global_1360165)[*uParam0 /*1157*/])->f_69 = 234527101;
	}
	if (!bParam2)
	{
		if (func_10(uParam0->f_10))
		{
			func_11(uParam0->f_10, 0, 2);
		}
	}
	if (func_12(uParam0->f_25))
	{
		func_13(&(uParam0->f_25), 1, 1);
	}
	if (func_12(uParam0->f_26))
	{
		func_13(&(uParam0->f_26), 1, 1);
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(uParam0->f_50)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_50)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_50));
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
	{
		func_14(&(sParam1->f_35));
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_18))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_18);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_19, false);
		func_15(uParam0->f_18);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_18);
	}
	if (func_16(531))
	{
		func_17(531);
	}
	if (func_18(sParam1->f_471))
	{
		Global_1391438->f_594 = sParam1->f_471;
	}
	if (sParam1->f_472 != -1)
	{
		func_19(*uParam0, sParam1->f_472);
	}
	(Global_40.f_6563.f_274[uParam0->f_13 /*20*/])->f_12 = 0;
	if (!bParam2)
	{
		if (uParam0->f_78.f_15)
		{
			func_20(&(Global_1391438->f_493));
		}
		else if ((Global_1391438->f_7[0 /*99*/])->f_9 == uParam0->f_9)
		{
			func_20(Global_1391438->f_7[0 /*99*/]);
		}
		else
		{
			func_20(Global_1391438->f_7[1 /*99*/]);
		}
	}
	else if ((Global_1391438->f_7[0 /*99*/])->f_9 == uParam0->f_9)
	{
		(Global_1391438->f_7[0 /*99*/])->f_7 = 1;
	}
	else
	{
		(Global_1391438->f_7[1 /*99*/])->f_7 = 1;
	}
}

int func_2(var uParam0, char* sParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (uParam0->f_27 < 4)
	{
		bVar1 = uParam0->f_27 > 0;
		if (func_21(uParam0, &bVar2, bVar1, 1, 0, 1))
		{
			if (func_22(uParam0, sParam1) || func_23(uParam0))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
				func_1(uParam0, sParam1, bVar2);
				return 1;
			}
		}
	}
	if (uParam0->f_27 > 0)
	{
		func_24(uParam0, sParam1);
	}
	switch (uParam0->f_27)
	{
		case 0:
			if (func_21(uParam0, &bVar3, 0, 1, 0, 1))
			{
				func_1(uParam0, sParam1, bVar3);
				return 1;
			}
			if (func_25() == func_26())
			{
				uParam0->f_27 = 1;
			}
			break;
		case 1:
			if (func_27())
			{
				Global_1391438->f_311[uParam0->f_12] = 1;
			}
			if (func_28(&(uParam0->f_31), 16))
			{
				uParam0->f_27 = 7;
				return 1;
			}
			if (func_29(uParam0, sParam1) && func_30(uParam0, sParam1))
			{
				func_31(uParam0, sParam1);
				uParam0->f_27 = 2;
			}
			break;
		case 2:
			if (func_32(uParam0))
			{
				Global_1391438->f_311[uParam0->f_12] = 0;
				((*Global_1360165)[*uParam0 /*1157*/])->f_69 = uParam0->f_8;
				func_33(*uParam0, 0, 0, 0);
				if (!func_34(531))
				{
					func_35(531, 0);
				}
				uParam0->f_27 = 3;
			}
			break;
		case 3:
			if (!func_28(&(uParam0->f_31), 2))
			{
				if (func_28(&(uParam0->f_31), 262144))
				{
					if (TASK::_0x841475AC96E794D1(uParam0->f_33))
					{
						if (func_36(uParam0))
						{
							func_37(&(uParam0->f_31), 2, 1);
							func_37(&(uParam0->f_31), 262144, 0);
							func_38(&(uParam0->f_75));
						}
					}
					else
					{
						func_37(&(uParam0->f_31), 2, 1);
					}
				}
			}
			else if (func_39(&(uParam0->f_75)) && func_40(&(uParam0->f_75)) > IntToFloat(sParam1->f_16))
			{
				if (sParam1->f_16 < 600)
				{
					sParam1->f_16 *= 2;
				}
				else
				{
					sParam1->f_16 = 600;
				}
				func_37(&(uParam0->f_31), 2, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
			{
				if (uParam0->f_9 == -1220302226)
				{
					if (func_42(func_41(iVar0), Global_36, 1) < 50f)
					{
						func_43(&(sParam1->f_35), &(sParam1->f_17), 1, 1);
					}
				}
				else
				{
					func_43(&(sParam1->f_35), &(sParam1->f_17), 0, 1);
				}
			}
			if (func_44(uParam0, sParam1))
			{
				func_45(16384);
				((*Global_1360165)[*uParam0 /*1157*/])->f_69 = 234527101;
				uParam0->f_27 = 4;
			}
			else if (!func_46(uParam0->f_25, 1))
			{
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_1, -1))
				{
					uParam0->f_27 = 2;
				}
			}
			break;
		case 4:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
			if (func_28(&(uParam0->f_31), 16384) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1391438->f_490, false))
			{
				Global_1391438->f_209 = { *uParam0 };
				func_48(&(Global_1391438->f_5), 64, 1);
			}
			if (func_49(uParam0->f_10))
			{
				func_50(uParam0->f_10);
			}
			if (!func_51(uParam0->f_10))
			{
				func_52(uParam0->f_10, 1, 0);
				func_53(Global_1935630, 256);
			}
			if (!func_54(uParam0, sParam1))
			{
				return 0;
			}
			if (func_55())
			{
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438->f_490, false))
				{
					Global_1391438->f_209 = { *uParam0 };
					func_48(&(Global_1391438->f_5), 64, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(sParam1->f_35.f_156))
				{
					iVar4 = func_56(uParam0->f_8);
					if (iVar4 != -1)
					{
						func_57(iVar4, sParam1->f_35.f_156);
					}
					if (!func_58(sParam1->f_375))
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sParam1->f_35.f_156, sParam1->f_375, 0f, 0f, sParam1->f_378, 2);
					}
				}
				if (!func_58(uParam0->f_21) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_2, -1))
				{
					func_59(uParam0->f_2, uParam0->f_21, uParam0->f_24, 2, 1073741824);
				}
				func_60(&(sParam1->f_473), uParam0->f_1);
				func_61(uParam0, sParam1);
				uParam0->f_27 = 5;
			}
			break;
		case 5:
			if (func_61(uParam0, sParam1))
			{
				if (func_28(&(uParam0->f_31), 16384))
				{
					((*Global_1360165)[*uParam0 /*1157*/])->f_69 = 234527101;
					iVar0 = 0;
					while (iVar0 < 27)
					{
						if (func_63(&(uParam0->f_3), func_62(iVar0)))
						{
							if (func_8(iVar0))
							{
								func_9(iVar0, 0, 0, 0, -1082130432, 1, 1, 0, 0, 0, 0);
							}
						}
						iVar0++;
					}
					func_64(16384);
					uParam0->f_27 = 7;
				}
				else
				{
					iVar0 = 0;
					while (iVar0 < 27)
					{
						if (func_63(&(uParam0->f_3), func_62(iVar0)))
						{
							if ((uParam0->f_9 != -103573613 && uParam0->f_9 != 194099983) && uParam0->f_9 != 2038046186)
							{
								func_65(iVar0, 0);
							}
							if (func_8(iVar0))
							{
								func_9(iVar0, 0, 0, 0, -1082130432, 1, 1, 0, 0, 0, 0);
							}
						}
						iVar0++;
					}
					((*Global_1360165)[*uParam0 /*1157*/])->f_69 = 234527101;
					uParam0->f_27 = 7;
				}
			}
			PED::SET_IK_TARGET(uParam0->f_1, 1, Global_35, 21030, 0f, 0f, 0f, 8, -1, -1);
			break;
		case 7:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
			if (func_66(uParam0, sParam1))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438->f_490, false))
				{
					func_67("Player accepted invite for ", 1, 1);
					func_1(uParam0, sParam1, 0);
					func_48(&(Global_1391438->f_5), 128, 1);
					return 1;
				}
				else
				{
					Global_1391438->f_209 = { *uParam0 };
					func_48(&(Global_1391438->f_5), 64, 1);
				}
			}
			break;
	}
	return 0;
}

void func_3(var uParam0, var uParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(iLocal_124))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_124);
	}
	func_68(iLocal_14, *uParam0, 0, 0, 0);
}

void func_4(int iParam0, int iParam1)
{
	if (!func_69(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_140 = (((*Global_1360165)[iParam0 /*1157*/])->f_140 - (((*Global_1360165)[iParam0 /*1157*/])->f_140 && iParam1));
	((*Global_1360165)[iParam0 /*1157*/])->f_141 = (((*Global_1360165)[iParam0 /*1157*/])->f_141 - (((*Global_1360165)[iParam0 /*1157*/])->f_141 && iParam1));
}

int func_5(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_70(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_140 = (((*Global_1360165)[iParam0 /*1157*/])->f_140 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_141 = (((*Global_1360165)[iParam0 /*1157*/])->f_141 || iParam1);
		((*Global_1360165)[iParam0 /*1157*/])->f_142 = &Global_1899515;
		func_71(&(((*Global_1360165)[iParam0 /*1157*/])->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

int func_6(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_72(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_72(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_72(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_72(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_72(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_72(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_72(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_72(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_7(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_73(iParam0))
		{
			return;
		}
	}
	func_74(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

bool func_8(int iParam0)
{
	if (!func_69(iParam0))
	{
		return false;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_9(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_69(iParam0))
	{
		return;
	}
	if (func_75(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_76(iParam0, 56, 1);
		func_77(&(Global_1359489->f_40), 1);
	}
	func_78(iParam0, 0);
	func_79(iParam0, 4, 0);
	func_80(iParam0);
	func_81(iParam0);
	func_7(iParam0, 37, 1);
	bVar0 = func_6(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_82(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_83(iParam0, 64, 1))
	{
		func_7(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_7(iParam0, 33, 1);
		func_7(iParam0, 34, 1);
		func_84(iParam0, 1056964608, -1, 1061158912);
		func_33(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_76(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_76(iParam0, 35, 1);
			if (bParam8)
			{
				func_76(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_85(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_7(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_76(iParam0, 33, 1);
		func_33(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_77(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_86(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_76(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_87(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_83(iParam0, 45, 1))
	{
		func_7(iParam0, 45, 1);
	}
	func_88(iParam0, 16, 1);
	func_7(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_6(func_89(iParam0), 0))
		{
			func_68(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_10(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_90(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_91(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_51(iParam0) && !func_10(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_92(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_51(iParam0))
	{
		iParam2 = -1;
	}
	if (func_90(iParam0) == 3 || (func_90(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_92(iParam0))))
	{
		func_94(func_93(iParam0), func_92(iParam0), iParam2);
		if ((!func_91(Global_1572864->f_8) && !func_95(0, 1, 0)) && !func_96(&Global_1935630, 32768))
		{
			iVar0 = func_97(iParam0);
			if (iVar0 != -1)
			{
				func_98(0);
			}
			else if (func_93(iParam0) == 8)
			{
				iVar0 = func_99();
				if (iVar0 != -1)
				{
					func_98(0);
				}
			}
		}
	}
	func_100(iParam0, 0);
	if (func_101(0) == iParam0)
	{
		func_102(1);
		func_103(0);
		func_104(1);
	}
	func_105(iParam0, 1);
	func_106(iParam0);
}

bool func_12(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_13(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_12(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_107(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_108(iVar0);
	*uParam0 = 0;
}

void func_14(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
}

void func_15(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	func_109(vVar0, 0);
}

bool func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_110(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;

	func_110(iParam0, &iVar0, &iVar1);
	func_111(iVar0, iVar1);
}

bool func_18(int iParam0)
{
	return iParam0 != 0;
}

void func_19(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_73(iParam0))
	{
		return;
	}
	if (!func_112(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (func_113(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			func_114(iParam0, &((Global_40.f_4942[iParam0 /*60*/])->f_8));
		}
		if (iVar0 != -1)
		{
			func_115(iParam0, iVar0);
		}
	}
}

void func_20(int* iParam0)
{
	struct<79> Var0;

	Var0.f_9 = -589165916;
	Var0.f_78.f_11 = 1;
	MISC::_COPY_MEMORY(iParam0, &Var0, 99);
}

int func_21(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1391438->f_1)
	{
		return 1;
	}
	uParam0->f_98++;
	if (uParam0->f_98 < 10)
	{
		return 0;
	}
	uParam0->f_98 = 0;
	if (func_95(0, 1, 1) && !func_51(uParam0->f_10))
	{
		return 1;
	}
	if (bParam4)
	{
		if ((func_75(*uParam0) && !func_116(*uParam0, &(Global_1391438->f_206[0]), 0)) && !func_116(*uParam0, &(Global_1391438->f_206[1]), 0))
		{
			return 1;
		}
	}
	if (func_117() != 1)
	{
		return 1;
	}
	if (func_83(*uParam0, 29, 1))
	{
		return 1;
	}
	if (!func_6(Global_35, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (!func_6(func_41(*uParam0), 0))
		{
			*uParam1 = 1;
		}
	}
	if (uParam0->f_9 == -103573613 || uParam0->f_9 == 194099983)
	{
		if (func_118(1) < 10)
		{
			return 1;
		}
	}
	if (func_6(uParam0->f_1, 0) && PED::_0x331550B212014B92(uParam0->f_1, Global_35))
	{
		return 1;
	}
	if (func_119())
	{
		return 1;
	}
	if (bParam3)
	{
		if (func_25() != func_26())
		{
			*uParam1 = 1;
		}
		if (!func_58(uParam0->f_14) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_14, true) > 200f)
		{
			*uParam1 = 1;
		}
	}
	if (((!func_120(&(uParam0->f_78)) && !uParam0->f_78.f_15) && !func_121(180573150, 1)) && !func_121(-404697685, 1))
	{
		func_67("Time window expired for ", 0, 1);
		func_67(" - Cancelling launch.", 1, 0);
		*uParam1 = 0;
		return 1;
	}
	if (bParam5)
	{
		if (!func_58(uParam0->f_14))
		{
			if (func_122(uParam0->f_14, 6f, 4, 1))
			{
				func_67("A lock volume now blocks ", 0, 1);
				func_67(" - Cancelling launch.", 1, 0);
				*uParam1 = 0;
				return 1;
			}
		}
	}
	if (*uParam1)
	{
		return 1;
	}
	return 0;
}

int func_22(var uParam0, var uParam1)
{
	return 1;
}

int func_23(var uParam0)
{
	if (Global_1391438->f_1)
	{
		return 1;
	}
	if (func_83(*uParam0, 29, 1))
	{
		return 1;
	}
	return 0;
}

int func_24(var uParam0, var uParam1)
{
	struct<23> Var0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && func_42(uParam0->f_1, Global_36, 1) < 8f)
	{
		Var0.f_4 = -1;
		Var0.f_8 = 2;
		Var0.f_9 = 1;
		Var0.f_10 = 1;
		Var0.f_11 = 1;
		Var0.f_13 = 1;
		Var0.f_14 = 2;
		Var0.f_15 = 2;
		Var0.f_16 = 3;
		Var0.f_19 = 3;
		Var0.f_20 = 1;
		Var0.f_21 = 3;
		Var0.f_22 = 3;
		Var0.f_7 = 500;
		Var0.f_3 = uParam0->f_1;
		Var0.f_4 = 14283;
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var0);
	}
	if ((uParam0->f_27 > 2 && uParam0->f_27 < 5) && iLocal_25)
	{
		func_123(uParam0);
		if (PED::_0xA0BC8FAED8CFEB3C(uParam0->f_1))
		{
			if (PED::_0xFB4891BD7578CDC1(uParam0->f_1, -1725579161))
			{
				func_124(uParam0->f_1, 0, 1);
			}
		}
		func_125(uParam0, uParam1);
	}
	if (uParam0->f_27 == 5)
	{
		func_126(uParam0);
		if (!iLocal_130)
		{
			func_127(*uParam0, 1495063555, 1);
			func_128(*uParam0, uParam0->f_1, 1495063555, 1);
			iLocal_130 = 1;
		}
	}
	if ((uParam0->f_27 == 5 && func_129(&(uParam1->f_35), uParam0->f_1, 0, 0, 1, 1)) || uParam0->f_27 == 7)
	{
		if (!func_130(uParam0->f_1, 713668775))
		{
			PED::FORCE_PED_MOTION_STATE(uParam0->f_1, -668482597, false, 1, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_1, 1890.418f, -1857.364f, 42.1239f, 1f, -1, 1f, 8193, 40000f);
			PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
		}
	}
	if (uParam0->f_27 == 5 && func_131(&(uParam1->f_35), iLocal_18, "w_repeater_carbine01", 0, 1, 1))
	{
		WEAPON::_0xFCCC886EDE3C63EC(uParam0->f_1, 0, 0);
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
	}
	return 1;
}

int func_25()
{
	return Global_1894899->f_2;
}

int func_26()
{
	return Global_40.f_4283.f_1;
}

bool func_27()
{
	return func_132(512);
}

int func_28(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_29(var uParam0, char* sParam1)
{
	switch (uParam0->f_28)
	{
		case 0:
			uParam0->f_28 = 1;
			break;
		case 1:
			if (func_133(uParam0))
			{
				PED::_0xED9582B3DA8F02B4(func_134(uParam0->f_3));
				uParam0->f_6 = 1;
				uParam0->f_28 = 2;
			}
			break;
		case 2:
			if (PED::_0x5E420FF293EE5472())
			{
				func_136(*uParam0, func_135());
				uParam0->f_1 = func_137(*uParam0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				if (func_6(uParam0->f_1, 0))
				{
					func_76(*uParam0, 51, 1);
					uParam0->f_28 = 3;
				}
			}
			break;
		case 3:
			func_138(uParam0, sParam1);
			uParam0->f_28 = 4;
			break;
		case 4:
			if (func_139(uParam0))
			{
				uParam0->f_28 = 5;
			}
			break;
		case 5:
			if (func_140(uParam0, sParam1))
			{
				uParam0->f_28 = 6;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

int func_30(var uParam0, char* sParam1)
{
	if (!iLocal_24)
	{
		STREAMING::REQUEST_MODEL(joaat("p_chair11x"), false);
		STREAMING::REQUEST_MODEL(joaat("p_cs_book02x"), false);
		STREAMING::REQUEST_MODEL(joaat("p_cs_map01x"), false);
		STREAMING::REQUEST_MODEL(2079707761, false);
		HUD::_0xF66090013DE648D5("CHRC4A");
		STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("weapon_repeater_carbine")), false);
		iLocal_24 = 1;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_chair11x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cs_book02x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cs_map01x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(2079707761))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("weapon_repeater_carbine"))))
	{
		return 0;
	}
	if (!HUD::_0xD0976CC34002DB57("CHRC4A"))
	{
		return 0;
	}
	func_141(&uLocal_26, Global_35, "ARTHUR", 0);
	func_142(&(sParam1->f_35));
	func_37(&(uParam0->f_31), 16384, 1);
	iLocal_25 = 1;
	return 1;
}

void func_31(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = func_41(*uParam0);
	if (func_6(iVar0, 0))
	{
		func_144(sParam1->f_534[0 /*17*/], func_143(uParam0->f_8), 0, -163964935, 0, 0, 0, 1, 0);
		func_145(&(sParam1->f_473), &(sParam1->f_534), 0, &(Global_1391438->f_308[uParam0->f_12]), 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		func_146(&(sParam1->f_473), 15);
		sParam1->f_552.f_3 = Global_35;
		sParam1->f_552.f_8 = 4;
		sParam1->f_552.f_19 = 4;
		sParam1->f_552.f_21 = 4;
		sParam1->f_552.f_17 = 4;
		sParam1->f_552.f_18 = 4;
		sParam1->f_552.f_7 = 0;
		PED::SET_PED_CONFIG_FLAG(iVar0, 259, true);
		if (sParam1->f_472 != -1)
		{
			func_147(*uParam0, sParam1->f_472, 0, 0);
		}
	}
}

int func_32(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	if (!func_6(uParam0->f_1, 0))
	{
		return 0;
	}
	if (TASK::_0x841475AC96E794D1(uParam0->f_33))
	{
		if (!func_148(uParam0))
		{
			return 0;
		}
	}
	bVar0 = !func_58(uParam0->f_21);
	if (bVar0 && !func_149(uParam0->f_21, 1, 0, 4))
	{
		if (!func_6(uParam0->f_2, 0))
		{
			uParam0->f_2 = func_150(*uParam0, 1, 1, 0, 0, 1, 1, 1, bVar0, uParam0->f_21, uParam0->f_21.f_1, uParam0->f_21.f_2, uParam0->f_24, 0, 0, 0, 0);
			return 0;
		}
		else
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true, false) };
			if (!func_151(vVar1, uParam0->f_21, 1f, 0))
			{
				if (!func_152(uParam0->f_2, 1116471296, -1082130432, -1082130432, -1082130432) && !CAM::IS_SPHERE_VISIBLE(uParam0->f_21, 5f))
				{
					func_59(uParam0->f_2, uParam0->f_21, uParam0->f_24, 2, 1073741824);
					return 0;
				}
				if (!func_130(uParam0->f_2, 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_21, 1f, -1, 0.25f, false, uParam0->f_24);
					func_153(0, 696740378, -1, 1, 0, -1082130432);
					func_154(uParam0->f_2, &iVar4, 0, 0, 1, 1);
				}
			}
		}
	}
	if (func_155(&(Global_1391438->f_5), 4096))
	{
		if (!func_156(32768) && CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	uParam0->f_30 = 0;
	return 1;
}

void func_33(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_73(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_7(iParam0, 50, 1);
		func_7(iParam0, 48, 1);
		func_7(iParam0, 49, 1);
		func_7(iParam0, 51, 1);
		func_7(iParam0, 52, 1);
		func_7(iParam0, 54, 1);
		func_7(iParam0, 55, 1);
	}
	else
	{
		func_76(iParam0, 50, 1);
		func_76(iParam0, 48, 1);
		func_76(iParam0, 49, 1);
		func_76(iParam0, 51, 1);
		if (bParam3)
		{
			func_76(iParam0, 54, 1);
		}
		else
		{
			func_7(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_76(iParam0, 52, 1);
			if (bParam3)
			{
				func_76(iParam0, 55, 1);
			}
		}
		else
		{
			func_7(iParam0, 52, 1);
			if (!bParam3)
			{
				func_7(iParam0, 55, 1);
			}
		}
	}
}

bool func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_157() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_110(iParam0, &iVar0, &iVar1);
	if (!func_158(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_159(iVar0, iVar1);
}

int func_36(var uParam0)
{
	if (!func_6(uParam0->f_1, 0))
	{
		return 0;
	}
	if (TASK::_0x841475AC96E794D1(uParam0->f_33))
	{
		if ((((!PED::_0x68821369A2CEADD5(uParam0->f_1, func_160(uParam0)) && !func_28(&(uParam0->f_31), 64)) && !STREAMING::_0x99F92061EFE908BA()) && !func_96(&Global_1935630, 16384)) && uParam0->f_6)
		{
			uParam0->f_6 = 0;
			func_37(&(uParam0->f_31), 64, 1);
			PED::_0xD65FDC686A031C83(uParam0->f_1, func_160(uParam0), 0.5f);
		}
		else if (func_28(&(uParam0->f_31), 64))
		{
			if (!func_130(uParam0->f_1, -2017877118))
			{
				func_37(&(uParam0->f_31), 64, 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_37(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_38(var uParam0)
{
	func_161(uParam0, 0f);
}

bool func_39(var uParam0)
{
	return func_162(*uParam0, 1);
}

float func_40(var uParam0)
{
	if (!func_39(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_163(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_164() - uParam0->f_1);
}

int func_41(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

float func_42(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_43(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_165(uParam0, 256) && !func_165(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_166(uParam0, sParam1);
	if (!func_165(uParam0, 64))
	{
		if (!func_58(func_167(uParam0)))
		{
			func_168(uParam0, 64);
		}
		else
		{
			vVar0 = { func_169(uParam0) };
			if (!func_58(vVar0))
			{
				func_170(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_42(Global_35, func_167(uParam0), 1);
	if (func_165(uParam0, 128) || func_165(uParam0, 256))
	{
		if ((fVar3 >= func_171(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_172();
				uParam0->f_241 = 0;
			}
			func_173(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
			}
			func_174(uParam0);
			func_175(uParam0, 128, 1);
			func_175(uParam0, 256, 1);
			func_175(uParam0, 4096, 1);
			func_175(uParam0, 32768, 1);
			func_175(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_176(uParam0) || bParam2)
	{
		if (!func_165(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
			{
				if (func_176(uParam0) >= func_171(uParam0))
				{
				}
				Var4 = { func_177(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_178(uParam0);
				}
				Var4 = { func_177(uParam0) };
				iVar12 = 256;
				if (!func_165(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_179(uParam0, 0, 0, 0, 0);
				func_168(uParam0, 128);
			}
		}
	}
	if (func_165(uParam0, 128))
	{
		if (func_165(uParam0, 256) && !func_165(uParam0, 4194304))
		{
			return 1;
		}
		func_180(uParam0);
		if (!uParam0->f_241)
		{
			if (func_181())
			{
				func_182(4096);
				uParam0->f_241 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_183(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_174[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_174[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_174[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, uParam0->f_174[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, uParam0->f_174[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_165(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, &Var15))
				{
					if (!func_165(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_156, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, &Var15);
						}
						func_168(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_168(uParam0, 256);
			func_175(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

int func_44(var uParam0, char* sParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (Global_1359489->f_672)
	{
		Global_1359489->f_672 = 0;
		return 1;
	}
	if (func_132(4))
	{
		return 0;
	}
	uVar0 = func_184(&(uParam0->f_1), &(sParam1->f_473), 3.75f, &(sParam1->f_534), 0f, 3, 1, "", 1, 0, 4, 2, -1082130432);
	if (func_185())
	{
		if (func_12((sParam1->f_534[0 /*17*/])->f_6))
		{
			func_186((sParam1->f_534[0 /*17*/])->f_6, 0, 0);
		}
	}
	if (func_187(Global_35, uParam0->f_1, 1, 1) > sParam1->f_379)
	{
		if (func_12((sParam1->f_534[0 /*17*/])->f_6))
		{
			func_186((sParam1->f_534[0 /*17*/])->f_6, 0, 0);
		}
	}
	iVar1 = uVar0;
	switch (iVar1)
	{
		case 0:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
			return 1;
		default:
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2) == uParam0->f_1)
			{
				if (!func_28(&(uParam0->f_31), 2))
				{
					func_37(&(uParam0->f_31), 262144, 1);
				}
			}
			break;
	}
	return 0;
}

void func_45(int iParam0)
{
	switch (func_157())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

bool func_46(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_107(iParam0);
	if (!HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1945938)[iVar0 /*18*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_47(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(uParam1->f_21, 0))
	{
		return;
	}
	func_188(uParam1, *uParam0, uParam1->f_56, 0);
	fVar0 = func_189(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	func_190(uParam1, fParam3);
	func_191(uParam0, uParam1, uParam2, fVar0);
	func_192(uParam1);
	if (MISC::IS_BIT_SET(uParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_193(uParam1, uParam2, uParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			iVar2 = 1;
			if (!MISC::IS_BIT_SET(*uParam1, 12))
			{
				iVar2 = func_194(uParam1, uParam0);
			}
			if (iVar2 && !MISC::IS_BIT_SET(*uParam1, 13))
			{
				func_195(uParam1);
			}
		}
	}
}

void func_48(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_49(int iParam0)
{
	return func_196(iParam0) == 0;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_49(iParam0))
	{
		return -1;
	}
	if (func_157() != -1)
	{
		iVar2 = func_197(iParam0);
		if (iVar2 >= 0)
		{
			func_198(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_199(iVar1, 1);
			func_198(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_197(iParam0);
		if (iVar2 >= 0)
		{
			func_198(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_91(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_199(iVar0, 1);
					func_198(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

bool func_51(int iParam0)
{
	int iVar0;

	iVar0 = func_196(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_52(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_91(iParam0))
	{
		return;
	}
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	if (bParam1)
	{
		if (func_92(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_92(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_201(func_200(iParam0));
			}
			if (func_157() != 0)
			{
				STATS::_0xB2A38826E5886E83(func_92(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_92(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_202(iParam0);
	if (!func_91(func_101(0)))
	{
		func_100(iParam0, 3);
		func_102(bParam2);
		if (func_157() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_103(1);
		}
		func_203(iParam0, -1);
		if (bParam1 && !func_156(2))
		{
			func_204(&Global_0, 1024);
		}
		if (func_157() == -1)
		{
			func_205(&(Global_1347343->f_11), 536870912);
			func_206(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_207(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_208(0);
			}
		}
		if (func_157() == -1)
		{
			iVar1 = func_97(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_99();
				switch (iVar1)
				{
					case 0:
						func_209(0);
						break;
					case 1:
						func_209(1);
						break;
					case 2:
						func_209(2);
						break;
					case 3:
						func_209(3);
						break;
					case 4:
						func_209(4);
						break;
					case 5:
						func_209(5);
						break;
					case 6:
						func_209(5);
						break;
					case 7:
						func_209(7);
						break;
					case 8:
						func_209(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_200(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_209(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_200(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_209(11);
						break;
					default:
						iVar1 = func_99();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_210(0);
									break;
								case 1:
									func_210(1);
									break;
								case 2:
									func_210(2);
									break;
								case 3:
									func_210(3);
									break;
								case 4:
									func_210(4);
									break;
								case 5:
									func_210(5);
									break;
								case 6:
									func_210(5);
									break;
								case 7:
									func_210(7);
									break;
								case 8:
									func_210(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_104(1);
	}
	else
	{
		func_203(iParam0, -1);
		func_100(iParam0, 4);
	}
	func_105(iParam0, 0);
}

void func_53(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_54(var uParam0, char* sParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 1898.94f, -1870.81f, 42.13f };
	StringCopy(&vVar3, "CHRC4_INT_LI", 24);
	switch (iLocal_134)
	{
		case 0:
			if (func_211(&uLocal_26, vVar3, 0, -1, 0, 0))
			{
				iLocal_134 = 1;
			}
			break;
		case 1:
			if (!func_212(&vVar3))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_124);
				iLocal_134 = 5;
			}
			break;
	}
	if (iLocal_134 != 5)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		iLocal_15 = OBJECT::CREATE_OBJECT(joaat("p_chair11x"), vVar0, true, true, false, false, true);
	}
	func_213(&(sParam1->f_35), iLocal_15, "p_chair11x", 0, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_16))
	{
		iLocal_16 = OBJECT::CREATE_OBJECT(joaat("p_cs_book02x"), vVar0, true, true, false, false, true);
	}
	func_213(&(sParam1->f_35), iLocal_16, "p_cs_book02x", 0, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
	{
		iLocal_17 = OBJECT::CREATE_OBJECT(joaat("p_cs_map01x"), vVar0, true, true, false, false, true);
	}
	func_213(&(sParam1->f_35), iLocal_17, "p_cs_map01x", 0, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18))
	{
		iLocal_18 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_repeater_carbine"), -1, vVar0, 1, 1065353216);
	}
	func_213(&(sParam1->f_35), iLocal_18, "w_repeater_carbine01", 0, 0, 0);
	func_213(&(sParam1->f_35), uParam0->f_1, "lenny", 0, 0, 0);
	func_213(&(sParam1->f_35), Global_35, "ARTHUR", 0, 0, 0);
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
	}
	return 1;
}

int func_55()
{
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_130(PLAYER::PLAYER_PED_ID(), 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0);
		}
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case -2036347356:
		case -1341684320:
			return 2;
		case -1567081107:
			return 1;
		case -1511391406:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_57(int iParam0, var uParam1)
{
	Global_1899528->f_61.f_4 = uParam1;
}

int func_58(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_214(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_215(iParam0))
	{
		if (func_216(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_72(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_59(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_59(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_72(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_72(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_72(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_72(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_72(iParam5, 129))
	{
		if (func_72(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_72(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_72(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_72(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_215(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_72(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_72(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_60(var uParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(uParam0->f_21, 20))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 20);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 0);
	}
	MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
	func_217(uParam0, &iParam1, 0);
	func_218(&iParam1);
	func_219(uParam0, 0);
	if (MISC::IS_BIT_SET(uParam0->f_21, 3))
	{
		func_220(uParam0, 0);
	}
	func_221(uParam0);
	func_222(uParam0, iParam1);
	func_223(uParam0);
	func_224(uParam0);
}

int func_61(var uParam0, char* sParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
	{
		return func_225(sParam1);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_63(var uParam0, var uParam1)
{
	return (*uParam0 && uParam1) != 0;
}

void func_64(int iParam0)
{
	switch (func_157())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;

	if (!func_69(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (func_226(iParam0, 0))
	{
		func_227(iParam0, 1);
		return 1;
	}
	if (!func_228())
	{
		return 0;
	}
	if (bParam1)
	{
		func_229(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_227(iParam0, 1);
	Global_1359489->f_15 = func_230(1);
	func_76(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_41(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_41(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_231(), 0);
	func_232(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_25();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

int func_66(var uParam0, char* sParam1)
{
	return 1;
}

void func_67(char* sParam0, int iParam1, int iParam2)
{
}

void func_68(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_73(iParam1))
	{
		return;
	}
	iVar0 = func_89(iParam1);
	if (func_233(iParam1))
	{
		if (!func_234(iParam1))
		{
			return;
		}
	}
	func_7(iParam1, 39, 1);
	func_235(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_235(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_235(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_76(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_236(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_69(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return 0;
	}
	if (!func_237(iParam0))
	{
		return 0;
	}
	if (func_238(iParam0, -2147483648))
	{
		return 1;
	}
	if (func_238(iParam0, 1073741824))
	{
		return 1;
	}
	iVar0 = func_239(iParam1);
	if (iVar0 < ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		return 1;
	}
	if (iVar0 == ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		if (bParam2)
		{
			return 1;
		}
		if (!func_238(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_240(*iParam0);
	iVar1 = func_241(*iParam0);
	iVar2 = func_242(*iParam0);
	iVar3 = func_243(*iParam0);
	iVar4 = func_244(*iParam0);
	iVar5 = func_245(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_246(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_246(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_247(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_72(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_73(int iParam0)
{
	return iParam0 > -1;
}

int func_74(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_75(int iParam0)
{
	return func_248(iParam0, 16, 1);
}

void func_76(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_73(iParam0))
		{
			return;
		}
	}
	func_74(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_77(var uParam0, int iParam1)
{
	if (iParam1 || !func_39(uParam0))
	{
		func_38(uParam0);
	}
}

void func_78(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_249(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_79(iParam0, 1, 0);
		}
	}
	func_79(iParam0, 16, bParam1);
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	if (!func_73(iParam0))
	{
		return;
	}
	func_250(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_80(int iParam0)
{
	func_79(iParam0, 8, 0);
}

void func_81(int iParam0)
{
	func_76(iParam0, 36, 1);
}

int func_82(int iParam0, bool bParam1)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_251(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_73(iParam0))
		{
			return false;
		}
	}
	func_74(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_69(iParam0))
	{
		iVar1 = func_41(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_252(iParam0);
		}
	}
	if (func_83(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_41(iParam0), 137, true);
	}
}

void func_85(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_41(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_41(iParam0), 204, false);
	}
}

void func_86(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_69(iParam0))
	{
		return;
	}
	if (func_75(iParam0))
	{
		if (!func_8(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_83(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_82(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_41(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_253(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_76(iParam0, 2, 1);
	}
	else
	{
		func_254(iParam0);
		func_76(iParam0, 1, 1);
	}
}

void func_88(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_69(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_89(int iParam0)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

int func_90(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_255(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_91(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_92(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_93(int iParam0)
{
	if (!func_91(iParam0))
	{
		return 0;
	}
	return func_257(func_256(iParam0));
}

void func_94(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_157() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_95(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_258())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_200(&(Global_1898164->f_1[0 /*5*/]));
		if (func_259(iVar0) && func_260(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_91(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_93(iParam0))
	{
		case 1:
			iVar0 = func_200(iParam0);
			return func_261(iVar0);
		case 8:
			iVar1 = func_200(iParam0);
			if (func_260(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_262(iVar1);
			}
			break;
	}
	return -1;
}

void func_98(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_157() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_263(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_264();
		Global_1898077->f_9 = func_265(Global_1894899->f_2);
		func_266(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_99()
{
	if (!func_267(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_267(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_267(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_267(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_267(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_267(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_267(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_100(int iParam0, int iParam1)
{
	if (!func_91(iParam0))
	{
		return;
	}
	func_268(iParam0, iParam1);
}

int func_101(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

void func_102(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_269(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_53(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_103(bool bParam0)
{
	if (!bParam0 && func_270(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_104(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_105(int iParam0, bool bParam1)
{
	if (func_157() != -1)
	{
		return;
	}
	if (func_101(0) != iParam0)
	{
		return;
	}
	if (func_271(iParam0))
	{
		if (bParam1)
		{
			func_272(-525676072);
		}
		else
		{
			func_273(-525676072);
		}
	}
}

int func_106(int iParam0)
{
	return func_275(func_274(iParam0));
}

int func_107(int iParam0)
{
	return iParam0;
}

void func_108(int iParam0)
{
	if (!func_276(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

void func_109(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_58(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_151(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_110(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

void func_111(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_112(int iParam0)
{
	return iParam0 != 0;
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = 0;
	*iParam2 = 0;
	if (func_277(iParam0, iParam1))
	{
		*iParam3 = 1;
	}
	if (func_278(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	*iParam2 = -1;
	return *iParam3;
}

void func_114(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_41(iParam0);
	if ((func_6(iVar0, 0) && func_279(iParam0, *uParam1)) && PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_280(iParam0, *uParam1);
	}
	if ((!func_6(iVar0, 0) || !func_279(iParam0, *uParam1)) || !PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_281(uParam1);
	}
}

void func_115(int iParam0, int iParam1)
{
	int iVar0;

	func_114(iParam0, (Global_40.f_4942[iParam0 /*60*/])->f_11[iParam1 /*3*/]);
	if (func_112(&((Global_40.f_4942[iParam0 /*60*/])->f_11[iParam1 /*3*/])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && func_112(&((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])))
		{
			(Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/] = &(Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/];
			((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/])->f_1 = ((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])->f_1;
			((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/])->f_2 = ((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])->f_2;
			func_283(iParam0, iVar0, func_282(iParam0, iVar0 + 1));
			func_281((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/]);
			func_283(iParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

bool func_116(int iParam0, int iParam1, bool bParam2)
{
	if (!func_69(iParam0))
	{
		return false;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(iParam1, bParam2))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == iParam1;
}

int func_117()
{
	return Global_40.f_4283.f_4;
}

int func_118(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_119()
{
	return &Global_1935436 == 2;
}

bool func_120(var uParam0)
{
	return func_284(&(uParam0->f_17), CLOCK::GET_CLOCK_HOURS());
}

int func_121(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_285(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_122(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar5[4];

	if (func_58(vParam0))
	{
		return 0;
	}
	uVar0 = 4;
	iVar5[0] = 16384;
	iVar5[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}

int func_123(var uParam0)
{
	if (iLocal_132)
	{
		return 1;
	}
	if (func_287(uParam0->f_1, func_286(1495063555, -1)))
	{
		func_288(*uParam0, uParam0->f_1, 1495063555);
		if (!func_289(uParam0->f_1))
		{
			return 0;
		}
		func_127(*uParam0, 1495063555, 1);
		func_128(*uParam0, uParam0->f_1, 1495063555, 1);
	}
	iLocal_132 = 1;
	return 1;
}

void func_124(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::_0xFB4891BD7578CDC1(iParam0, -1725579161))
		{
			PED::_0x1902C4CFCC5BE57C(iParam0, 622113465);
			bVar0 = true;
		}
	}
	else if (PED::_0xFB4891BD7578CDC1(iParam0, -1725579161))
	{
		PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (bVar0)
		{
			PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
		}
	}
}

void func_125(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;

	if (func_290(uParam1->f_534[0 /*17*/]))
	{
		if (func_291())
		{
			if (!func_292(uParam1->f_534[0 /*17*/], 1, 0))
			{
				func_293(uParam1->f_534[0 /*17*/], 1, 0);
			}
		}
		else if (func_292(uParam1->f_534[0 /*17*/], 1, 0))
		{
			func_293(uParam1->f_534[0 /*17*/], 0, 0);
		}
	}
	vVar0 = { 1898.94f, -1870.81f, 42.13f };
	switch (iLocal_133)
	{
		case 0:
			iLocal_124 = ANIMSCENE::_CREATE_ANIM_SCENE(func_294(), 0, 0, false, true);
			if (ANIMSCENE::_0x25557E324489393C(iLocal_124))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
				{
					iLocal_15 = OBJECT::CREATE_OBJECT(joaat("p_chair11x"), vVar0, true, true, false, false, true);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_124, "p_chair11x", iLocal_15, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_16))
				{
					iLocal_16 = OBJECT::CREATE_OBJECT(joaat("p_cs_book02x"), vVar0, true, true, false, false, true);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_124, "p_cs_book02x", iLocal_16, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18))
				{
					iLocal_18 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_repeater_carbine"), -1, vVar0, 1, 1065353216);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_124, "w_repeater_carbine01", iLocal_18, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_124, "lenny", uParam0->f_1, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_124, "ARTHUR", Global_35, 0);
				if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_1, joaat("weapon_sniperrifle_rollingblock_lenny"), 0, 0))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(uParam0->f_1, joaat("weapon_sniperrifle_rollingblock_lenny"), true, -142743235);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_124);
				iLocal_133 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(iLocal_124, 1, 0))
			{
				sLocal_125 = "pl_Enter_with_Weapon";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_124, sLocal_125);
				iLocal_133 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_124, sLocal_125))
			{
				func_295();
				sLocal_125 = "pl_Base01";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_124, sLocal_125);
				iLocal_133 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iLocal_124) > 0.98f && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_124, sLocal_125))
			{
				func_38(&uLocal_126);
				func_295();
				iLocal_133 = 4;
			}
			break;
		case 4:
			if (!func_39(&uLocal_126) || func_40(&uLocal_126) > fLocal_129)
			{
				iVar3 = func_296(uParam0->f_1, Global_35, 1060437492);
				if (iVar3 != 1)
				{
					if ((func_42(uParam0->f_1, Global_36, 1) < 10f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam0->f_1, Global_35, 17))
					{
						switch (iVar3)
						{
							case 0:
								sLocal_125 = "pl_Greeting_Front";
								break;
							case 2:
								sLocal_125 = "pl_Greeting_Right";
								break;
							case 3:
								sLocal_125 = "pl_Greeting_Left";
								break;
						}
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_124, sLocal_125);
						iLocal_133 = 5;
					}
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_124, sLocal_125))
			{
				func_295();
				sLocal_125 = "pblIdle";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_124, sLocal_125);
				iLocal_133 = 6;
			}
			break;
		case 6:
			if (!func_39(&uLocal_126))
			{
				func_38(&uLocal_126);
			}
			fLocal_129 = (fLocal_129 * 2f);
			iLocal_133 = 3;
			break;
	}
}

int func_126(var uParam0)
{
	if (iLocal_131)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		iLocal_14 = func_297(&uLocal_19, *uParam0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		return 0;
	}
	if (!func_298(*uParam0, 256))
	{
		func_299(*uParam0, iLocal_14, 1);
		return 0;
	}
	if (func_6(iLocal_14, 0))
	{
		ENTITY::_0x203BEFFDBE12E96A(iLocal_14, vLocal_20, fLocal_23, 1, 0, 1);
		PHYSICS::_0x06AADE17334F7A40(iLocal_14, 1859.48f, -1828.82f, 43.3f);
	}
	iLocal_131 = 1;
	return 1;
}

void func_127(int iParam0, int iParam1, bool bParam2)
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (!func_300(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_76(iParam0, 25, 1);
	}
}

void func_128(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_301(iParam2))
		{
			iVar0 = func_286(iParam2, -1);
			if (func_287(iParam1, iVar0))
			{
				if (func_302(iParam1, iVar0))
				{
					if (func_303(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_304(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_305(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_76(iParam0, 66, 0);
		}
	}
}

int func_129(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	return func_131(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5);
}

int func_130(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (iParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_306(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!func_307(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, sParam2))
		{
			func_308(uParam0, iParam1, 4);
			return 1;
		}
		else if (iParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, sParam2))
		{
			func_308(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	switch (func_157())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

int func_133(var uParam0)
{
	int iVar0;

	if (func_95(36866, 0, 1))
	{
		return 0;
	}
	if (func_28(&(uParam0->f_31), 8))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (func_63(&(uParam0->f_3), func_62(iVar0)))
			{
				if (!func_309(iVar0) && !func_8(iVar0))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_134(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_310(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_135()
{
	return Global_40.f_4283;
}

void func_136(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_311(iParam0, iParam1);
	if (((Global_40.f_4942[iParam0 /*60*/])->f_3 == iVar0 && ((*Global_1360165)[iParam0 /*1157*/])->f_63 == iVar0) && CLOCK::GET_CLOCK_HOURS() >= 6)
	{
		func_127(iParam0, func_312(iParam0, iParam1, 1, 1), 0);
	}
}

int func_137(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_69(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_83(iParam0, 2, 1))
			{
				func_7(iParam0, 2, 1);
			}
			if (func_248(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_76(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_9(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_6(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_6(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_229(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_76(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_313(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_76(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_313(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_83(iParam0, 44, 0))
			{
				func_76(iParam0, 44, 0);
			}
			if (func_314(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_313(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_7(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_33(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_315(iParam0, 0, 0, 1);
			}
			func_7(iParam0, 33, 1);
			func_7(iParam0, 34, 1);
			func_7(iParam0, 29, 1);
			if (!func_58(vVar0) && iParam7)
			{
				func_313(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_313(iParam0, 4);
			}
			else
			{
				func_313(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_229(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_59(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_313(iParam0, 4);
			}
			else
			{
				func_313(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_300(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_127(iParam0, iParam13, 0);
						func_128(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_83(iParam0, 25, 0))
						{
							func_7(iParam0, 25, 0);
						}
						func_76(iParam0, 66, 0);
						func_313(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_313(iParam0, 5);
				}
				func_76(iParam0, 28, 1);
			}
			else
			{
				func_313(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_313(iParam0, 6);
			}
			break;
		case 6:
			if (func_6(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_316(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_317(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_313(iParam0, 7);
		case 7:
			func_33(iParam0, bParam9, bParam15, 0);
			func_79(iParam0, 4, bParam11);
			func_81(iParam0);
			if (bParam20)
			{
				if (func_318(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_319(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_313(iParam0, 0);
			func_320(iParam0, 16, 1);
			func_7(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_138(var uParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;
	var uVar6;
	char cVar7[64];

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
	{
		func_321(MISC::GET_HASH_KEY(&(uParam0->f_34)), 1, 0, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_67)))
	{
		if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_67)))
		{
			HUD::_0xF66090013DE648D5(&(uParam0->f_67));
		}
	}
	HUD::_0xF66090013DE648D5("CMPI");
	Var1 = Global_1359489->f_21;
	Var1.f_2 = 429892159;
	Var1.f_3 = func_322(func_135());
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_3 = uParam0->f_9;
		if (func_323(Var1, -972717455, &uVar0, 0))
		{
			uParam1->f_471 = uVar0;
		}
		Var1.f_3 = uParam0->f_9;
		if (func_323(Var1, -1140954353, &uVar6, 0))
		{
			uParam1->f_472 = uVar6;
		}
		else
		{
			uParam1->f_472 = -1;
		}
		Var1.f_3 = uParam0->f_9;
		Var1.f_4 = -1225075647;
		if (func_324(Var1, -2047775528, &(uParam1->f_17), 0))
		{
			if (func_325(Var1, -1102408038, &(uParam1->f_375), 0))
			{
				func_326(Var1, -1750702392, &(uParam1->f_378), 0);
			}
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(&(uParam1->f_17), "CASEN_DRNK1"))
	{
		func_327(&(uParam1->f_35), "CASEN_DRNK1");
	}
	if (MISC::ARE_STRINGS_EQUAL(&(uParam1->f_17), "CAHSH_FSH3"))
	{
		func_327(&(uParam1->f_35), "CAHSH_FSH3");
	}
	if (MISC::ARE_STRINGS_EQUAL(&(uParam1->f_17), "PRHM6_INT"))
	{
		func_168(&(uParam1->f_35), 8388608);
		if (func_135() == 1)
		{
			StringCopy(&cVar7, "HorseshoeCamp", 64);
			func_327(&(uParam1->f_35), &cVar7);
			func_168(&(uParam1->f_35), 134217728);
		}
		else if (func_135() == 2)
		{
			StringCopy(&cVar7, "ClemensCamp", 64);
			func_328(&(uParam1->f_35), cVar7);
		}
	}
}

bool func_139(var uParam0)
{
	bool bVar0;

	bVar0 = true;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
	{
		if (!func_329(MISC::GET_HASH_KEY(&(uParam0->f_34))))
		{
			bVar0 = false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_67)))
	{
		if (!HUD::_0xD0976CC34002DB57(&(uParam0->f_67)))
		{
			bVar0 = false;
		}
	}
	if (!HUD::_0xD0976CC34002DB57("CMPI"))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
	}
	return bVar0;
}

int func_140(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar10;

	iVar0 = 1;
	if (func_18(sParam1->f_471))
	{
		if (Global_1391438->f_594 == sParam1->f_471)
		{
			Global_1391438->f_594 = func_330();
		}
		if (!STREAMING::_IS_IMAP_ACTIVE(sParam1->f_471))
		{
			if (((!STREAMING::_0x73B40D97D7BAAD77(sParam1->f_471, Global_36) || func_155(&(Global_1391438->f_5), 8)) || func_156(32768)) || CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::_REQUEST_IMAP(sParam1->f_471);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
	{
		if (!TASK::_0x841475AC96E794D1(uParam0->f_33))
		{
			iVar1 = MISC::GET_HASH_KEY(&(uParam0->f_34));
			uParam0->f_33 = TASK::_0xF533D68FF970D190(uParam0->f_14, iVar1, 1f, 0, 0);
			if (!TASK::_0x841475AC96E794D1(uParam0->f_33))
			{
				uParam0->f_33 = func_331(iVar1, uParam0->f_14, uParam0->f_17, 2f, -1f, 0);
				iVar0 = 0;
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
	{
	}
	func_332(&(sParam1->f_35), PLAYER::PLAYER_PED_ID(), sParam1, 0, 0, 0);
	iVar10 = 0;
	while (iVar10 < 27)
	{
		if (func_333(iVar10, &(uParam0->f_3)))
		{
			if (func_334(uParam0, &sVar2, iVar10))
			{
				if (func_6(func_41(iVar10), 0))
				{
					func_332(&(sParam1->f_35), func_41(iVar10), &sVar2, 0, 0, 0);
				}
			}
		}
		iVar10++;
	}
	func_335(&(sParam1->f_35), 50f);
	func_336(&(sParam1->f_35), 75f);
	if (!func_58(sParam1->f_375))
	{
		func_170(&(sParam1->f_35), sParam1->f_375);
	}
	return iVar0;
}

void func_141(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_337(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_142(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_183(uParam0) };
	func_327(uParam0, &Var0);
}

char* func_143(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return "ACT_HUNTING_PROMPT";
		case -1511391406:
			return "ACT_FFF_CAMP_PROMPT";
		case 654481153:
			return "ACT_FISHING_PROMPT";
		case 754620122:
			return "ACT_RUSTLING_PROMPT";
		case -2036347356:
			return "ACT_POKER_PROMPT";
		case -1341684320:
			return "ACT_POKER_CAMP_PROMPT";
		case -919476462:
			return "ACT_COACH_PROMPT";
		case -1670940721:
			return "ACT_BANK_PROMPT";
		case 380107708:
			return "ACT_TRAIN_PROMPT";
		case 565221344:
			return "ACT_HOMEROB_PROMPT";
		case -1700356309:
			return "ACT_BLACKJACK_PROMPT";
		case 1523333387:
			return "ACT_CRAPS_PROMPT";
		case 1744128959:
			return "ACT_HIDEOUT_PROMPT";
		case -1567081107:
			return "ACT_DOMINOES_PROMPT";
		case -1739349092:
			return "ACT_RETURN_PROMPT";
		case -301635006:
			return "ACT_MISSION_PROMPT";
		default:
			break;
	}
	return "ACT_INVALID_PROMPT";
}

void func_144(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_12(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_338(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_339(iParam0->f_6, iParam0->f_5, 0);
			}
			func_186(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_340(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_145(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0f, 0f, 0f };
	func_341(iParam0, iParam3, 0);
	func_342(uParam1, iParam2);
	func_343(iParam0, iParam4);
	if (!MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::SET_BIT(&(iParam0->f_21), 0);
	}
	if (fParam5 > -1f)
	{
		func_344(iParam0, fParam5);
	}
	if (iParam6 == 1)
	{
		func_146(iParam0, 17);
	}
	if (iParam7 == 1)
	{
		func_146(iParam0, 16);
	}
	if (iParam8 == 1)
	{
		func_146(iParam0, 15);
	}
	if (iParam9 == 1)
	{
		func_146(iParam0, 13);
	}
	if (iParam10 == 1)
	{
		func_146(iParam0, 12);
	}
	if (iParam11 == 1)
	{
		func_146(iParam0, 11);
	}
	if (iParam12 == 1)
	{
		func_146(iParam0, 8);
	}
	if (iParam13 == 1)
	{
		func_146(iParam0, 10);
	}
	if (iParam14 == 1)
	{
		func_146(iParam0, 9);
	}
	if (iParam15 == 1)
	{
		func_146(iParam0, 18);
	}
	if (iParam16 == 1)
	{
		func_146(iParam0, 20);
	}
	if (iParam17 == 1)
	{
		func_146(iParam0, 19);
	}
}

void func_146(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_147(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_69(iParam0))
	{
		return 0;
	}
	func_345(iParam0);
	iVar0 = -1;
	if (!func_346(iParam0, iParam1, &iVar0, 1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_347(iParam0, iParam1))
	{
	}
	return 1;
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_30)
	{
		case 0:
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_18))
			{
				uParam0->f_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_14, 0f, 0f, uParam0->f_17, func_348(uParam0), "Activity Start Pos");
				POPULATION::_0xB56D41A694E42E86(uParam0->f_18, 0, 0, 0, -1, -1, 0);
				MISC::_0x2FCD528A397E5C88(uParam0->f_18, 16384);
				uParam0->f_19 = PED::_0x4C39C95AE5DB1329(uParam0->f_18, 0, 15);
				uParam0->f_20 = func_349(uParam0->f_18, "Activity", 1, 0, 0, 0, -1082130432);
			}
			if (func_350(&(uParam0->f_18), uParam0->f_3))
			{
				return 0;
			}
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 389, true);
			if (func_351(uParam0))
			{
				uParam0->f_30 = 3;
			}
			else if (func_352(uParam0->f_9))
			{
			}
			else
			{
				uParam0->f_30 = 1;
			}
			break;
		case 1:
			iVar0 = TASK::_0x5BA659955369B0E2(uParam0->f_33);
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 1) && iVar0 != uParam0->f_1)
			{
				if (!TASK::_0x0C3CB2E600C8977D(uParam0->f_1, 0))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
				}
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || iVar0 == uParam0->f_1)
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_STAND_STILL(0, 1000);
			TASK::_TASK_USE_SCENARIO_POINT(0, uParam0->f_33, 0, -1, 1, 0, 0, 0, -1082130432, 0);
			func_154(uParam0->f_1, &iVar1, 0.1f, 0.2f, 1, 1);
			uParam0->f_30 = 4;
			break;
		case 3:
			if (func_351(uParam0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_1, 0, 1);
				func_59(uParam0->f_1, TASK::_0xA8452DD321607029(uParam0->f_33, 1), 0f, 2, 1073741824);
				TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_1, uParam0->f_33, 0, -1, 0, 1, 0, 0, -1082130432, 0);
				uParam0->f_30 = 5;
			}
			break;
		case 4:
			if (func_351(uParam0))
			{
				uParam0->f_30 = 3;
			}
			else if (PED::_0x9C54041BB66BCF9E(uParam0->f_1, uParam0->f_33) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 0))
			{
				uParam0->f_30 = 5;
			}
			break;
		case 5:
			return 1;
	}
	return 0;
}

int func_149(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_58(vParam0))
	{
		return 0;
	}
	uVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	var uVar0;
	int iVar1;

	if (!func_73(iParam0))
	{
		return 0;
	}
	iVar1 = func_297(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, bParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_151(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_42(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
}

void func_154(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_155(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

bool func_156(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_157()
{
	return Global_1572887->f_12;
}

int func_158(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_353(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_354(iParam0))
	{
		return 0;
	}
	if (func_355(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_356(iParam0, 1)) || func_156(32768))
	{
		if (!func_356(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_357())
	{
		return 0;
	}
	return 1;
}

void func_159(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_160(var uParam0)
{
	int iVar0;

	iVar0 = func_296(uParam0->f_1, Global_35, 1060437492);
	switch (iVar0)
	{
		case 0:
			return -700479906;
		case 3:
			return -630213949;
		case 2:
			return -630705751;
		case 1:
			return -1156705763;
		default:
			break;
	}
	return -700479906;
}

void func_161(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_164() - fParam1);
	func_358(uParam0, 1);
	func_359(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_162(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_163(var uParam0)
{
	return func_162(*uParam0, 2);
}

float func_164()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_165(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_166(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_165(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_360("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_360("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_168(uParam0, 8192);
}

Vector3 func_167(var uParam0)
{
	return uParam0->f_5;
}

void func_168(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_169(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_361(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_157))
	{
		uParam0->f_157 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_157, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_157, func_362(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_170(var uParam0, vector3 vParam1)
{
	if (func_58(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_171(var uParam0)
{
	return uParam0->f_147;
}

void func_172()
{
	struct<4> Var0;

	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_363(Var0);
	}
}

void func_173(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, uParam0->f_174[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, uParam0->f_174[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, uParam0->f_174[iVar0 /*9*/]);
		}
		(uParam0->f_174[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

void func_174(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_165(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_364(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_165(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_175(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_175(uParam0, 16, 1);
}

void func_175(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_156)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_156);
	}
}

float func_176(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_177(var uParam0)
{
	return uParam0->f_158;
}

void func_178(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_365() };
	func_327(uParam0, &Var0);
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_165(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_366(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_367());
		func_168(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_368(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_168(uParam0, 16);
	}
}

void func_180(var uParam0)
{
	if ((!func_165(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_156)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_156, 0))
	{
		func_369(uParam0);
		func_370(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_156, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_156);
		}
		func_168(uParam0, 32768);
	}
}

bool func_181()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_182(int iParam0)
{
	struct<4> Var0;

	if (func_371(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_363(Var0);
}

struct<8> func_183(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_372(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_373() };
	}
	return Var0;
}

int func_184(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_374(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_189(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		func_47(uParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_38(&(iParam1->f_13));
		}
		if (func_375(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_376(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_184(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_218(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_377(*uParam0, 1, 1);
						}
					}
					else if (func_378(iParam1, 22))
					{
						func_377(*uParam0, 0, 1);
					}
				}
				if (func_379(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_380(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_381(iParam8);
					func_382(iParam1, uParam3);
					if (func_383(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_384(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_385(iParam1, uParam3, fVar8);
					if (func_386(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_387(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_379(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_388(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_383(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_380(uParam0, func_379(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_381(iParam8);
					func_382(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_387(uParam3, 0, 0, 1, 1);
					func_389(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_130(Global_35, 501393341) && !func_130(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_296(Global_35, *uParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_6(iParam1->f_28, 0)) && func_390(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_130(iParam1->f_28, 518218985)) && !func_130(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_130(Global_35, -828834893) && !func_130(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_296(Global_35, *uParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_194(iParam1, uParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_195(iParam1)))
					{
					}
					else if (!func_391(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_38(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_392(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (func_393(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_379(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_388(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_383(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_380(uParam0, func_379(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_381(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_387(uParam3, 0, 0, 1, 1);
					}
					func_389(iParam1, 1);
				}
				func_385(iParam1, uParam3, fVar8);
				if (func_393(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_394(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_185()
{
	return Global_1327590->f_19745;
}

void func_186(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	if (bParam1)
	{
		func_395(iParam0, 4);
		func_396(iVar0, 1);
		func_397(iVar0, 1);
	}
	else
	{
		func_398(iParam0, 4);
		func_397(iVar0, 0);
	}
}

float func_187(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_188(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_6(iParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(iParam1, iParam2);
		MISC::SET_BIT(&(uParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(iParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(iParam1, iParam3);
		}
		MISC::SET_BIT(&(uParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17) && MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

float func_189(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_190(var uParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(*uParam0, 14))
	{
		uParam0->f_26 = uParam1;
	}
}

void func_191(var uParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	func_399(uParam0, uParam1);
	fVar0 = func_189(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	if (fVar0 <= uParam1->f_26 || MISC::IS_BIT_SET(uParam1->f_21, 20))
	{
		func_382(uParam1, uParam2);
		func_400(uParam1);
		func_401(uParam1);
		if (!MISC::IS_BIT_SET(*uParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), uParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), uParam1->f_27);
				}
			}
		}
		func_402(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(uParam1->f_21, 2))
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_35))
			{
				uParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, uParam1->f_26, uParam1->f_26, 20f);
			}
			else
			{
				func_403(uParam1->f_35, 0, 0);
				MISC::SET_BIT(&(uParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*uParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*uParam1, 15)))
		{
			iVar1 = 0;
			if (func_296(Global_35, *uParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				uParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*uParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*uParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			func_404(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), bVar2, uParam1->f_30, uParam1->f_31, uParam1->f_32, func_189(bVar3, uParam1->f_33, uParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*uParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && func_6(uParam1->f_28, 0)) && func_390(Global_35, uParam1->f_28, (uParam1->f_26 + 1.75f), 1)) && !func_130(uParam1->f_28, 518218985)) && !func_130(uParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(uParam1->f_28, 1, 0);
			TASK::TASK_SMART_FLEE_COORD(uParam1->f_28, Global_36, (uParam1->f_26 + 1.75f), -1, 256, 0.101f);
			uParam1->f_28 = 0;
		}
	}
}

void func_192(var uParam0)
{
	if (MISC::IS_BIT_SET(*uParam0, 7))
	{
		if (MISC::IS_BIT_SET(uParam0->f_21, 3))
		{
			func_220(uParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 3))
	{
		func_77(&(uParam0->f_22), 0);
		if (uParam0->f_25 == 0f || func_405(&(uParam0->f_22), uParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1956578->f_1), 5);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_0x4CC5F2FC1332577F(724769646);
			if (!MISC::IS_BIT_SET(uParam0->f_21, 4))
			{
				MISC::SET_BIT(&(uParam0->f_21), 4);
			}
		}
	}
}

void func_193(int* iParam0, var uParam1, var uParam2, bool bParam3, char* sParam4, float fParam5)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	fVar0 = func_189(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam2, true, false)));
	if ((fVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!func_130(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *uParam2, 5000, -1082130432, -1082130432, -1082130432);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		func_406(iParam0, uParam1, uParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *uParam2, "ForcedILO", 0f, 0f, 0f, *uParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

int func_194(int* iParam0, var uParam1)
{
	vector3 vVar0;

	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return 1;
	}
	if (!PED::_0xA911EE21EDF69DAF(Global_35) && !func_130(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { func_407(*uParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			func_408(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return 1;
	}
	else if (PED::_0xA911EE21EDF69DAF(Global_35) && !func_130(Global_35, -208384378))
	{
		if (func_409(Global_35))
		{
			iParam0->f_60 = func_410();
		}
		else
		{
			iParam0->f_60 = PED::_0xD806CD2A4F2C2996(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, 1073741824, 9);
		}
	}
	return 0;
}

int func_195(int* iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, -654888872, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (func_412(func_411(Global_35, 0, 1, 0)) || func_412(func_411(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return 1;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!func_412(func_411(Global_35, 0, 1, 0)) && !func_412(func_411(Global_35, 1, 1, 0)))
		{
			func_86(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return 1;
		}
		else if (((func_412(func_411(Global_35, 0, 1, 0)) || func_412(func_411(Global_35, 1, 1, 0))) && !func_130(Global_35, 716706914)) && !func_130(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			func_77(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = func_413(&(iParam0->f_52)) >= 1.5f;
		if ((!func_412(func_411(Global_35, 0, 1, 0)) && !func_412(func_411(Global_35, 1, 1, 0))) || bVar0)
		{
			func_86(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return 1;
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	if (!func_91(iParam0))
	{
		return -1;
	}
	return func_90(iParam0);
}

int func_197(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_198(int iParam0, bool bParam1)
{
	if (!func_91(iParam0))
	{
		return;
	}
	if (!func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_92(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_92(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_93(iParam0), func_200(iParam0), func_414(iParam0), func_92(iParam0), Global_36);
		}
	}
	func_100(iParam0, 1);
	bParam1 = bParam1;
}

void func_199(int iParam0, int iParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || iParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_256(Global_1898330[iParam0]);
		func_415(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

int func_200(int iParam0)
{
	if (!func_91(iParam0))
	{
		return -1;
	}
	return func_416(func_256(iParam0));
}

void func_201(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_417(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, 676312963);
}

void func_202(int iParam0)
{
	if (!func_91(iParam0))
	{
		return;
	}
	func_419(iParam0, func_418(iParam0) + 1);
}

int func_203(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_274(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_420(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_421(iVar0, iParam1);
	return iParam1;
}

void func_204(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_206(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_207(bool bParam0)
{
	func_422(bParam0);
	func_423(bParam0);
	func_424(bParam0);
	func_425(bParam0);
	func_426(bParam0);
	func_427(bParam0);
	func_428(bParam0);
	func_429(bParam0);
}

void func_208(bool bParam0)
{
	if (func_157() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_35(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_35(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_430(1, bParam0, 1);
	func_431();
	Global_40.f_11095.f_43 = bParam0;
}

void func_209(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_157() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_432(Global_1898077->f_7, Global_1898077->f_3);
}

void func_210(int iParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_157() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_433(Global_1898077->f_7, Global_1898077->f_4);
}

bool func_211(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_434(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_212(char* sParam0)
{
	return AUDIO::_0xD89504D9D7D5057D(sParam0);
}

void func_213(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_306(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_435(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_436(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_437(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_438(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_439(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_440(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

int func_214(var uParam0)
{
	return uParam0;
}

bool func_215(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_216(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

int func_217(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_60) || !func_6(*uParam1, 0))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_60) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_60)) && iParam2 == 0)
	{
		return 0;
	}
	if (func_58(uParam0->f_57))
	{
		func_441(uParam0, uParam1);
	}
	func_408(uParam0->f_60, uParam0->f_57);
	uParam0->f_57 = { 0f, 0f, 0f };
	uParam0->f_60 = 0;
	return 0;
}

void func_218(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_219(var uParam0, bool bParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_86(&(uParam0->f_18));
	if (bParam1)
	{
		uParam0->f_21 = 0;
		uParam0->f_25 = 0f;
		uParam0->f_26 = 30f;
		uParam0->f_27 = 1.25f;
		uParam0->f_29 = 10f;
		uParam0->f_30 = 50f;
		uParam0->f_31 = 30f;
		uParam0->f_32 = 21f;
		uParam0->f_33 = 20f;
		uParam0->f_34 = 5f;
		uParam0->f_28 = 0;
		uParam0->f_60 = 0;
		uParam0->f_57 = { 0f, 0f, 0f };
		uParam0->f_55 = 0;
		func_86(&(uParam0->f_22));
		func_86(&(uParam0->f_37));
		func_86(&(uParam0->f_40));
		func_86(&(uParam0->f_43));
		func_86(&(uParam0->f_49));
		func_86(&(uParam0->f_52));
		func_223(uParam0);
		func_224(uParam0);
		if (MAP::DOES_BLIP_EXIST(uParam0->f_56))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_56));
		}
	}
}

void func_220(var uParam0, bool bParam1)
{
	if (!MISC::IS_BIT_SET(*uParam0, 7))
	{
		if (bParam1)
		{
			CAM::_0xC64ABC0676AF262B();
		}
		else
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 3);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 4))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 4);
	}
	HUD::_0x8BC7C1F929D07BF3(724769646);
}

void func_221(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_21, 5))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		MISC::CLEAR_BIT(&(uParam0->f_21), 5);
	}
	func_442();
}

void func_222(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_6(iParam1, 0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_56))
		{
			iVar0 = uParam0->f_56;
		}
		else
		{
			return;
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 16);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 18);
	}
	if (MAP::_0x3CB8859F04763C78(iParam1, iVar0))
	{
		MAP::_0x44813684F72B563C(iParam1, iVar0);
	}
	if (uParam0->f_55 != 0)
	{
		uParam0->f_55 = 0;
	}
}

void func_223(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_21, 2) && VOLUME::_0x92A78D0BEDB332A3(uParam0->f_35))
	{
		func_443(uParam0->f_35);
		func_444(uParam0->f_35);
		MISC::CLEAR_BIT(&(uParam0->f_21), 2);
	}
}

void func_224(var uParam0)
{
	func_444(uParam0->f_36);
}

int func_225(var uParam0)
{
	struct<4> Var0;

	if (!func_58(uParam0->f_375) && ANIMSCENE::_0x25557E324489393C(uParam0->f_35.f_156))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_35.f_156, uParam0->f_375, 0f, 0f, uParam0->f_378, 2);
	}
	MemCopy(&Var0, {uParam0->f_17}, 4);
	if (func_445(Var0, &(uParam0->f_35)))
	{
		return 1;
	}
	return 0;
}

bool func_226(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_41(iParam0);
	if (bParam1)
	{
		if (!func_6(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_231(), 1);
}

void func_227(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_69(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(func_231());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_446(iParam0, 1, Global_35);
	}
}

bool func_228()
{
	return func_230(1) < 3;
}

void func_229(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_41(iParam0);
	if (!func_69(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

int func_230(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_134(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_231(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_231(), iVar3);
		if (func_447(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_231()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_232(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_69(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_448(&iVar0, 1);
				break;
			case 14:
				func_448(&iVar0, 8);
				func_448(&iVar1, 4);
				func_448(&iVar1, 5);
				func_448(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_448(&iVar0, 8);
				func_448(&iVar0, 5);
				func_448(&iVar1, 4);
				func_448(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_41(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_41(iParam0), iVar1);
	}
}

int func_233(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_234(int iParam0)
{
	if (!func_73(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_235(int iParam0, int iParam1, bool bParam2)
{
	if (!func_73(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_236(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_73(iParam0))
	{
		return 0;
	}
	iVar0 = func_89(iParam0);
	if (func_6(iVar0, 0))
	{
		if (func_6(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_233(iParam0)) || func_234(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_449(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_450(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_451(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_452(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_452(iParam0, 0));
					func_453(iParam0);
				}
			}
			else
			{
				if (func_248(iParam0, 32768, 1))
				{
					iVar2 = func_452(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_6(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_248(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_451(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_452(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_452(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_451(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_454(iParam0, 0);
	return 1;
}

int func_237(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_140 != 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_141 != 0)
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_140 && iParam1) != 0)
	{
		return 1;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_141 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_240(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_455(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_241(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_242(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_243(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_244(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_245(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_456(uParam0, iParam6);
	func_457(uParam0, iParam5);
	func_458(uParam0, iParam4);
	func_459(uParam0, iParam3);
	func_460(uParam0, iParam2);
	func_461(uParam0, iParam1);
}

bool func_248(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_73(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_249(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_250(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

void func_251(int iParam0)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_462(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_252(int iParam0)
{
	if (func_69(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_41(iParam0)))
		{
			func_320(iParam0, 67108864, 1);
			func_7(iParam0, 19, 1);
		}
	}
}

float func_253(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_41(iParam0);
	iVar1 = func_82(iParam0, 0);
	func_463(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_256(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_257(var uParam0)
{
	return uParam0 & 31;
}

int func_258()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_259(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_260(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_263(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_264()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_267(int iParam0, bool bParam1)
{
	switch (func_196(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_268(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_464(iParam0);
	}
	else
	{
		func_465(iParam0, iParam1);
	}
	func_466();
}

void func_269(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_467(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_271(int iParam0)
{
	if (!func_91(iParam0))
	{
		return 0;
	}
	switch (func_93(iParam0))
	{
		case 1:
			switch (func_200(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_200(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_272(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_468(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_469(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_471(func_470(iParam0), 6);
}

void func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_468(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_469(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_472(func_470(iParam0), 6);
}

int func_274(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_275(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_421(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_276(int iParam0)
{
	return func_473(iParam0, 2);
}

bool func_277(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0 /*60*/])->f_8 == iParam1;
}

int func_278(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (&(Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/] == iParam1)
		{
			return 1;
		}
		*iParam2++;
	}
	*iParam2 = -1;
	return 0;
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return 0;
	}
	if (func_277(iParam0, iParam1))
	{
		return func_474(iParam0);
	}
	iVar0 = -1;
	if (func_278(iParam0, iParam1, &iVar0))
	{
		return func_282(iParam0, iVar0);
	}
	return 0;
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_41(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::_0x2B4CE170DE09F346(iVar0, iParam1);
	}
	func_475(iParam0, iParam1, 0);
}

void func_281(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_282(int iParam0, int iParam1)
{
	if ((!func_73(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return false;
	}
	return MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1);
}

void func_283(int iParam0, int iParam1, bool bParam2)
{
	if ((!func_73(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return;
	}
	if (bParam2)
	{
		if (!MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1))
		{
			MISC::SET_BIT(&(((*Global_1360165)[iParam0 /*1157*/])->f_1155), iParam1);
		}
	}
	else if (MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1))
	{
		MISC::CLEAR_BIT(&(((*Global_1360165)[iParam0 /*1157*/])->f_1155), iParam1);
	}
}

bool func_284(var uParam0, int iParam1)
{
	return (*uParam0 && BUILTIN::SHIFT_LEFT(1, iParam1)) != 0;
}

bool func_285(int iParam0)
{
	int iVar0;
	int iVar1;

	func_476(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_286(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_477(296923297, iParam1);
			return func_478(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_477(1237718549, iParam1);
			return func_478(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_287(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_288(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!func_301(iParam2))
	{
		return 0;
	}
	iVar0 = func_286(iParam2, -1);
	if (!func_287(iParam1, iVar0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "metaped_outfit_request") && DECORATOR::DECOR_EXIST_ON(iParam1, "metaped_outfit_request_name"))
	{
		iVar1 = DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request_name");
		if (iVar1 == iVar0)
		{
			return 1;
		}
		else
		{
			func_463(iParam0, iParam1);
		}
	}
	iVar2 = PED::_REQUEST_METAPED_OUTFIT(ENTITY::GET_ENTITY_MODEL(iParam1), iVar0);
	DECORATOR::DECOR_SET_INT(iParam1, "metaped_outfit_request", iVar2);
	DECORATOR::DECOR_SET_INT(iParam1, "metaped_outfit_request_name", iVar0);
	return 1;
}

bool func_289(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return true;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_287(iParam0, iVar0))
	{
		return true;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

int func_290(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_291()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1894.871f, -1866.1f, 41.90994f, 1892.699f, -1864.334f, 44.90194f, 3.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1894.178f, -1863.466f, 41.89867f, 1892.52f, -1865.544f, 44.90194f, 4.25f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_292(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_12(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_479(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_293(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_480(iParam0, 13))
	{
		func_481(iParam0, 0);
	}
	else
	{
		func_482(iParam0, 0);
	}
	if (func_12(iParam0->f_6))
	{
		if (bParam2)
		{
			func_13(&(iParam0->f_6), 0, 1);
		}
	}
}

char* func_294()
{
	return "script@common@cnv_camp@calny@leadin_ilo";
}

void func_295()
{
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_124, sLocal_125, true);
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_124, 0))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_124);
	}
	ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_124, sLocal_125);
}

int func_296(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_483(iParam0, vVar0, fParam2);
}

int func_297(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	int iVar0;

	if (!func_73(iParam1))
	{
		return 0;
	}
	iVar0 = func_89(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_6(iVar0, 0)) || (bParam3 && !func_234(iParam1)))
	{
		if (bParam2)
		{
			if (func_450(iParam1, 1) != 0)
			{
				iVar0 = func_484(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_6(iVar0, 0))
	{
		*uParam0 = 2;
		((*Global_1360165)[iParam1 /*1157*/])->f_70.f_2 = 0;
		func_485(iParam1, iVar0);
		func_486(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_298(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return false;
	}
	return (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1) != 0;
}

int func_299(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return 0;
	}
	if (func_298(iParam0, 256))
	{
		return 1;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_6(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam1, func_487(iParam0));
	PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
	func_235(iParam0, 256, 1);
	return 1;
}

int func_300(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_69(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_488(iParam0, iParam1);
	return uVar0;
}

int func_301(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_303(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_287(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_304(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_305(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 1933068772))
	{
		PED::_0xD710A5007C2AC539(iParam1, 1933068772, 1);
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 494009478))
	{
		PED::_0xD710A5007C2AC539(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_287(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_287(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_287(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_287(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_287(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_287(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_287(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_287(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_287(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_287(iParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam1, -134124598))
		{
			PED::_0xD710A5007C2AC539(iParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(iParam1, 2071466316))
		{
			PED::_0xD710A5007C2AC539(iParam1, 2071466316, 1);
		}
		PED::_0x1902C4CFCC5BE57C(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_287(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_287(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_287(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_287(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_287(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_287(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_287(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_287(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_287(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_287(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_287(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_287(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_287(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_287(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_287(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_287(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

char* func_306(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_362(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_489(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_490(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_307(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_491(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_308(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			func_439(uParam0->f_13[iVar0 /*12*/], iParam2);
		}
		iVar0++;
	}
}

bool func_309(int iParam0)
{
	return func_248(iParam0, 4, 1);
}

void func_310(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 13:
		case 14:
			if (iParam1 == 7 || iParam1 == 8)
			{
				return -1205468859;
			}
			return -445211559;
		case 0:
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
		case 21:
		case 22:
			return -445211559;
		case 3:
		case 4:
		case 18:
			return 1744281750;
		case 11:
			return -946772361;
		default:
			break;
	}
	return 0;
}

int func_312(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_73(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_267(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_492(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_267(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_51(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_492(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_267(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_248(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_492(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_267(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_51(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_267(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_492(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_121(747937920, 1) && !func_267(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_41(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == (Global_40.f_4942[iParam0 /*60*/])->f_3)
			{
				bVar9 = true;
				iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_300(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

void func_313(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_314(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_312(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_10(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_51(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_312(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_493(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_494(iParam0, 0))
					{
						func_76(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_495(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_7(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_6(func_41(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_6(func_89(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_315(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_496(iParam0, bParam3);
	}
	else
	{
		func_497(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_498(iParam0, bParam3);
	}
	else
	{
		func_499(iParam0, bParam3);
	}
}

void func_316(int iParam0)
{
	func_500(iParam0);
	func_501(iParam0, 0);
}

void func_317(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

int func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_319(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_502(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_502(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_320(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_69(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_321(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_0x19A6BE7D9C6884D3(iParam0, iParam1, iParam2, iParam3);
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 695356898;
		case 1:
			return -432333475;
		case 2:
			return 2093317438;
		case 3:
			return -1327067584;
		case 4:
			return -145951480;
		case 5:
			return -2045110373;
		case 6:
			return 2092390181;
		case 7:
			return -1192044061;
		case 8:
			return 1206762561;
		default:
			break;
	}
	return 991030100;
}

int func_323(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_324(vector3 vParam0, var uParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_325(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_326(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_327(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

void func_328(var uParam0, char[32] cParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return;
	}
	uParam0->f_166 = { cParam1 };
}

bool func_329(int iParam0)
{
	return STREAMING::_0x9427C94D2E4094A4(iParam0, 0);
}

int func_330()
{
	return 0;
}

int func_331(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, fParam5, fParam6, iParam7);
}

void func_332(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_213(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

bool func_333(int iParam0, var uParam1)
{
	var uVar0;

	if (!func_69(iParam0))
	{
		return false;
	}
	uVar0 = func_62(iParam0);
	return (*uParam1 && uVar0) != 0;
}

int func_334(var uParam0, char[4] cParam1, int iParam2)
{
	struct<5> Var0;

	Var0 = Global_1359489->f_21;
	Var0.f_1 = 0;
	Var0.f_2 = 429892159;
	Var0.f_3 = func_322(func_135());
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 13127246;
		Var0.f_3 = uParam0->f_9;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_3 = func_503(iParam2);
			if (func_324(Var0, 443199092, cParam1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_335(var uParam0, float fParam1)
{
	uParam0->f_146 = fParam1;
}

void func_336(var uParam0, float fParam1)
{
	uParam0->f_147 = fParam1;
}

bool func_337(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_338(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_339(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_340(int* iParam0, char* sParam1)
{
	if (func_12(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_339(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_482(iParam0, 1);
}

void func_341(var uParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(iParam1))
	{
		uParam0->f_56 = iParam1;
		if (!MISC::IS_BIT_SET(uParam0->f_21, 16))
		{
			MISC::SET_BIT(&(uParam0->f_21), 16);
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 16);
	}
	if (iParam2 != 0)
	{
		uParam0->f_55 = iParam2;
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(uParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), 18);
	}
}

void func_342(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (iVar0 == iParam1)
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 12))
			{
				MISC::SET_BIT((*uParam0)[iVar0 /*17*/], 12);
			}
		}
		else if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 12))
		{
			MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 12);
		}
		iVar0++;
	}
}

void func_343(var uParam0, var uParam1)
{
	func_86(&(uParam0->f_22));
	uParam0->f_25 = uParam1;
}

void func_344(int* iParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
		MISC::SET_BIT(iParam0, 14);
	}
}

void func_345(int iParam0)
{
	int iVar0;

	if (!func_69(iParam0))
	{
		return;
	}
	func_504(iParam0, 0, &((Global_40.f_4942[iParam0 /*60*/])->f_8));
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_504(iParam0, 0, (Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/]);
		iVar0++;
	}
}

int func_346(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (bParam3)
	{
		if (func_278(iParam0, iParam1, iParam2))
		{
			if (iParam4 > 0 || iParam5 > 0)
			{
				uVar0 = func_505();
				func_71(&uVar0, 0, iParam4, iParam5, 0, 0, 0, 1);
				((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_1 = uVar0;
			}
			else
			{
				((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_1 = -15;
			}
			return 1;
		}
	}
	*iParam2 = 0;
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (!func_112(&((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])))
		{
			iVar1 = -15;
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar1 = func_505();
				func_71(&iVar1, 0, iParam4, iParam5, 0, 0, 0, 1);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/] = iParam1;
			((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_1 = iVar1;
			((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_2 = 0;
			return 1;
		}
		*iParam2++;
	}
	func_115(iParam0, 0);
	*iParam2 = 9;
	iVar2 = -15;
	if (iParam4 > 0 || iParam5 > 0)
	{
		iVar2 = func_505();
		func_71(&iVar2, 0, iParam4, iParam5, 0, 0, 0, 1);
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/] = iParam1;
	((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_1 = iVar2;
	((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_2 = 0;
	return 1;
}

int func_347(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_73(iParam0))
	{
		return 0;
	}
	if (func_506(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = func_41(iParam0);
	if (!func_6(iVar0, 0))
	{
		return 0;
	}
	iVar1 = -1;
	if (!func_113(iParam0, iParam1, &iVar1, &iVar2))
	{
		return 0;
	}
	if (func_279(iParam0, iParam1))
	{
	}
	if (!func_70(iParam0, 512, 0))
	{
		func_5(iParam0, 512, 0, -1);
	}
	if (PED::_0x1E017404784AA6A3(iVar0, iParam1))
	{
		func_475(iParam0, iParam1, 1);
		return 1;
	}
	return 0;
}

Vector3 func_348(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 581819093:
			return 3.5f, 3.5f, 3f;
		case 673012160:
			return 4.5f, 4.5f, 3f;
	}
	return 3f, 3f, 3f;
}

int func_349(int iParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_507(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_350(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_333(iVar1, &uParam1))
		{
		}
		else if (func_508(iVar1))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(func_41(iVar1), *uParam0, true, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_351(var uParam0)
{
	int iVar0;

	if (Global_1359489->f_672)
	{
		return 1;
	}
	iVar0 = 1;
	if (func_253(*uParam0) < 100f)
	{
		iVar0 = 0;
	}
	if (BUILTIN::VDIST2(Global_36, TASK::_0xA8452DD321607029(uParam0->f_33, 1)) < 100f)
	{
		iVar0 = 0;
	}
	if (func_152(uParam0->f_1, 1116471296, -1082130432, -1082130432, -1082130432) || CAM::IS_SPHERE_VISIBLE(TASK::_0xA8452DD321607029(uParam0->f_33, 1), 3f))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case -1891229662:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_353(int iParam0, int iParam1)
{
	if (func_157() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_354(int iParam0)
{
	if (func_157() != -1)
	{
		if (func_356(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_356(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_356(iParam0, 65536) && !func_356(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_356(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_356(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_356(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_357()
{
	return Global_1905944->f_5694;
}

void func_358(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_359(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<8> func_360(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<4> func_361(var uParam0)
{
	return uParam0->f_152;
}

char* func_362(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_509(iVar0);
}

void func_363(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_510(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_510(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_511(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_512(8);
}

void func_364(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> func_365()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_366(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

char* func_367()
{
	return "unnamed";
}

void func_368(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, iParam2, iVar0);
}

void func_369(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_491(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_439(uParam0->f_13[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

void func_370(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_491(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (func_491(uParam0->f_13[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_513(uParam0, &((uParam0->f_13[iVar0 /*12*/])->f_1), &(uParam0->f_13[iVar0 /*12*/]), (uParam0->f_13[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_491(uParam0->f_13[iVar0 /*12*/], 16))
					{
						func_514(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_371(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<8> func_372(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_373()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_374(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_375(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_515(iParam0, uParam1))
		{
			if (!func_516(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_387(uParam2, 0, 0, 1, 0);
				func_517(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_516(uParam1->f_10, 1))
		{
			func_518(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_519(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_376(var uParam0, int* iParam1, var uParam2, float fParam3, var uParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_516(uParam4, 32);
		func_520(iParam1, uParam2, 0);
		iVar5 = func_521(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_387(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_516(uParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_516(uParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_516(uParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_516(uParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_516(uParam4, 8388608) || func_516(uParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_516(uParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_516(uParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_378(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_378(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_516(uParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_522(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_516(uParam4, 268435456))
			{
				iVar8 = func_523(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_524(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_378(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_516(uParam4, 2) || func_516(uParam4, 16))
			{
				func_377(*uParam0, 1, 1);
			}
			else
			{
				func_377(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_377(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_378(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_379(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = uParam1 & 32 != false;
	bVar2 = uParam1 & 65792 != false;
	bVar3 = uParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_525(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_380(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_526(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_516(uParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_381(var uParam0)
{
	if (func_516(uParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_516(uParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_516(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

int func_382(int* iParam0, var uParam1)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1499911466, false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, 1287709438) || PAD::IS_CONTROL_PRESSED(0, 1499911466)) || PAD::IS_CONTROL_PRESSED(0, -209515122)) || func_527()) || func_528()) || func_529())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_38(&(iParam0->f_46));
	}
	if (func_39(&(iParam0->f_46)) && !func_405(&(iParam0->f_46), 0.25f))
	{
		func_530(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_383(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;

	iVar1 = func_118(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = uParam10 & 128 != false;
	bVar7 = uParam10 & 64 != false;
	bVar8 = uParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_531(Global_35)) || func_532(Global_35)) || func_533(Global_35));
	fVar12 = -1f;
	if (func_39(&(iParam1->f_13)))
	{
		fVar12 = func_40(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_12(((*uParam4)[iVar0 /*17*/])->f_6);
		func_534(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_535(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_536(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_387(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_392(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_520(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							func_537(iParam1, uParam4, uParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_193(iParam1, uParam4, uParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (func_412(func_411(Global_35, 0, 1, 0)) || func_412(func_411(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_0xA911EE21EDF69DAF(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_538(iParam1, fParam6, iParam1->f_9))
					{
						func_38(&(iParam1->f_18));
						if (bVar6)
						{
							func_392(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_539(iParam1, fParam2);
	}
	return bVar5;
}

void func_384(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_385(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_290((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_539(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_386(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_540(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_146(iParam1, 0);
				func_520(iParam1, uParam2, func_378(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

void func_387(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_12(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_13(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

void func_388(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_534(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_389(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_390(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_391(int* iParam0)
{
	var uVar0;
	bool bVar1;

	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (func_541(&uVar0))
		{
			func_77(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_542())
			{
			}
		}
		else
		{
			func_77(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = func_413(&(iParam0->f_37)) >= 1.5f;
		if ((!func_541(&uVar0) || func_542()) || bVar1)
		{
			if (bVar1)
			{
				func_543();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return 1;
		}
	}
	return 0;
}

void func_392(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_293((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_393(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_38(&(iParam1->f_18));
			return 0;
		}
		else if (func_39(&(iParam1->f_18)))
		{
			func_86(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_39(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_544(&(iParam1->f_18), fParam2);
	return 1;
}

void func_394(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	func_60(iParam0, 0);
	func_520(iParam0, uParam1, 1);
	func_387(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_395(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_396(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_473(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_397(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_398(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_399(var uParam0, var uParam1)
{
	if (MISC::IS_BIT_SET(*uParam1, 21))
	{
		func_224(uParam1);
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam1->f_36) || !func_6(*uParam0, 0))
	{
		return;
	}
	uParam1->f_36 = VOLUME::_0x0EB78C2B156635B1(665633627, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	VOLUME::_0x5B23DFF8E0948BB2(uParam1->f_36, 1);
}

int func_400(var uParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*uParam0, 8))
	{
		return 1;
	}
	func_545(64);
	if (MISC::IS_BIT_SET(uParam0->f_21, 14))
	{
		if (func_412(func_411(Global_35, 0, 1, 0)) && func_411(Global_35, 0, 1, 0) == joaat("weapon_kit_camera"))
		{
			MISC::CLEAR_BIT(&(uParam0->f_21), 14);
			MISC::CLEAR_BIT(&(uParam0->f_21), 15);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 15))
	{
		if (((func_412(func_411(Global_35, 0, 1, 0)) && func_411(Global_35, 0, 1, 0) == joaat("weapon_kit_camera")) && !func_130(Global_35, 716706914)) && !func_130(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			func_77(&(uParam0->f_49), 0);
			MISC::SET_BIT(&(uParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_21, 15))
	{
		bVar0 = func_413(&(uParam0->f_49)) >= 1.5f;
		if (!func_412(func_411(Global_35, 0, 1, 0)) || bVar0)
		{
			func_546(0);
			func_86(&(uParam0->f_49));
			MISC::SET_BIT(&(uParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

int func_401(var uParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*uParam0, 10))
	{
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	if (MISC::IS_BIT_SET(uParam0->f_21, 12))
	{
		if (&Global_1357517)
		{
			MISC::CLEAR_BIT(&(uParam0->f_21), 12);
			MISC::CLEAR_BIT(&(uParam0->f_21), 13);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_21, 13))
	{
		if (&Global_1357517)
		{
			Global_1357516 = 0;
		}
		func_77(&(uParam0->f_40), 0);
		MISC::SET_BIT(&(uParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_21, 13))
	{
		bVar0 = func_413(&(uParam0->f_40)) >= 1.5f;
		if (!&Global_1357517 || bVar0)
		{
			func_86(&(uParam0->f_40));
			MISC::SET_BIT(&(uParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

void func_402(bool bParam0)
{
	if (bParam0)
	{
		func_547(4);
	}
	func_547(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_403(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1, iParam2, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1, iParam2, 0, -1, -1, 2);
}

void func_404(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_366(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_42(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_548() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_549(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_549(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

int func_405(var uParam0, float fParam1)
{
	if (!func_39(uParam0))
	{
		return 0;
	}
	if (func_40(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_406(var uParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*uParam2, uParam0->f_26, 3, 1, 0, sParam3, 0);
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if (!func_12(((*uParam1)[iVar1 /*17*/])->f_6) || func_550(((*uParam1)[iVar1 /*17*/])->f_6) == 0)
			{
			}
			else
			{
				HUD::_UIPROMPT_SET_GROUP(func_550(((*uParam1)[iVar1 /*17*/])->f_6), iVar0, 0);
			}
			iVar1++;
		}
	}
}

Vector3 func_407(int iParam0, int iParam1, float fParam2)
{
	return func_551(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam2);
}

void func_408(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

int func_409(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_552(iVar9);
		if (!PED::_0x608BC6A6AACD5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_0x0FD25587BB306C86(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_410()
{
	return Global_1900383->f_393;
}

int func_411(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_412(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

float func_413(var uParam0)
{
	if (!func_39(uParam0))
	{
		return 0f;
	}
	if (func_163(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_164() - uParam0->f_1);
}

int func_414(int iParam0)
{
	if (!func_91(iParam0))
	{
		return -1;
	}
	return func_553(func_256(iParam0));
}

void func_415(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_257(iParam0);
	*uParam1 = func_416(iParam0);
	*uParam2 = func_553(iParam0);
}

int func_416(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_417(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_418(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_419(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = uParam1;
}

void func_420(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (iParam0 == -1 || iParam0 == 0)
	{
		*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1 /*5*/] = iParam0;
		(Global_1898164->f_1[iParam1 /*5*/])->f_1 = func_256(iParam0);
		func_415((Global_1898164->f_1[iParam1 /*5*/])->f_1, &((Global_1898164->f_1[iParam1 /*5*/])->f_3), &((Global_1898164->f_1[iParam1 /*5*/])->f_4), &((Global_1898164->f_1[iParam1 /*5*/])->f_2));
	}
}

void func_421(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_554((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_554(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_91(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_100(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_422(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_555(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_423(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_555(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_424(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_555(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_425(bool bParam0)
{
	func_555(Global_1956612, bParam0);
}

void func_426(bool bParam0)
{
	func_555(&(Global_1415412->f_3), bParam0);
}

void func_427(bool bParam0)
{
	if (func_556(Global_1934051->f_33))
	{
		func_557(Global_1934051->f_33, 7148155);
	}
	func_555(&(Global_1934051->f_33), bParam0);
}

void func_428(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_559(func_558(iVar0));
		if (iVar1 != 0)
		{
			func_557(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_555((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_429(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_560(iVar0, -1);
		func_561(iVar0, 0);
		func_562(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

void func_430(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_431()
{
	func_563();
	func_564();
	func_565();
}

void func_432(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_433(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

void func_434(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_435(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_436(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0 /*12*/]);
		}
		iVar0++;
	}
	return 0;
}

void func_437(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (&uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			*(uParam0->f_13[iVar12 /*12*/]) = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_438(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_439(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_440(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_441(var uParam0, var uParam1)
{
	if (!func_6(*uParam1, 0))
	{
		return;
	}
	uParam0->f_57 = { func_407(*uParam1, Global_35, uParam0->f_26) };
	uParam0->f_57 = { uParam0->f_57 + Global_36 };
	uParam0->f_57.f_2 = (uParam0->f_57.f_2 + 10f);
}

void func_442()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_566();
}

void func_443(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam0);
	POPULATION::_0x74C2B3DC0B294102(iParam0);
}

void func_444(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

int func_445(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	func_166(uParam4, &sParam0);
	if (func_165(uParam4, 2) && !func_165(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_567(uParam4) != 1)
	{
		func_568(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_567(uParam4))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_156, 0))
				{
					func_569(uParam4, &sParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
				{
					func_570(uParam4, 4);
					return 0;
				}
				else if (func_571(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_570(uParam4, 3);
			}
			else if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_158)) && func_165(uParam4, 134217728))
				{
				}
				else
				{
					func_142(uParam4);
				}
				func_38(&(uParam4->f_1));
				func_570(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_180(uParam4);
				if (!func_39(&(uParam4->f_1)))
				{
					func_77(&(uParam4->f_1), 0);
				}
				else if (func_40(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					func_570(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156) || !ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
			{
				if (func_43(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
					{
						func_570(uParam4, 4);
					}
					else if (!func_58(func_167(uParam4)) && !func_572(Global_35, func_167(uParam4), 100f, 1, 1))
					{
						func_573(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_167(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_40(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					func_570(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					func_574(1, 0);
					func_569(uParam4, &sParam0);
					func_570(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_40(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				}
				func_570(uParam4, 4);
			}
			break;
		case 3:
			func_575(uParam4);
			if (func_571(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_156, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || func_165(uParam4, 512)))
			{
				if (!func_165(uParam4, 1024) && func_576(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_165(uParam4, 512))
				{
					func_38(&(uParam4->f_1));
					func_168(uParam4, 512);
					func_570(uParam4, 4);
				}
				else if (func_165(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_568(uParam4);
			}
			if (func_165(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_577(uParam4) - func_578(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_307(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_578(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_579(uParam4))
			{
				if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
				}
				func_580(uParam4);
				func_581(uParam4);
				return 1;
			}
			else
			{
				if (func_165(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_156);
						}
						func_38(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_168(uParam4, 512);
						func_175(uParam4, 67108864, 1);
						func_570(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_165(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156)) && CAM::IS_SCREEN_FADED_OUT()) && func_578(uParam4) <= 5000) && func_578(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_165(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_582(&(uParam4->f_213), 0);
					func_168(uParam4, 536870912);
				}
				if (func_578(uParam4) >= 5000 && func_578(uParam4) <= (func_577(uParam4) - 5000))
				{
					func_583();
				}
			}
			break;
		case 6:
			if (func_579(uParam4))
			{
				func_580(uParam4);
				func_581(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_165(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
					{
						func_168(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 1);
						if (_NAMESPACE71::_0xC17F69E1418CD11F(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_156))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_571(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 0);
						}
						func_570(uParam4, 3);
					}
					else if (func_40(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 0);
						}
						func_570(uParam4, 3);
					}
				}
				if (func_567(uParam4) == 3)
				{
					if (func_165(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_570(uParam4, 4);
			break;
	}
	return 0;
}

void func_446(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_69(iParam0))
	{
		return;
	}
	if (!func_508(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_584(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_585())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_447(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_157() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_448(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

float func_449(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_586(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_450(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_587(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_89(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_452(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_588(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_453(int iParam0)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_454(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_455(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_456(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_457(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_458(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_241(*uParam0);
	iVar1 = func_240(*uParam0);
	if (iParam1 < 1 || iParam1 > func_246(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_459(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_460(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_461(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_463(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_589(iParam1);
	}
}

int func_464(int iParam0)
{
	int iVar0;

	iVar0 = func_255(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_590(iVar0);
}

int func_465(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_591(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_466()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_467(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_468(bool bParam0)
{
	if (func_157() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_469(int iParam0)
{
	struct<2> Var0;

	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_471(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_472(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

bool func_473(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_474(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1154;
}

void func_475(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_277(iParam0, iParam1))
	{
		func_593(iParam0, bParam2);
		return;
	}
	iVar0 = -1;
	if (func_278(iParam0, iParam1, &iVar0))
	{
		func_283(iParam0, iVar0, bParam2);
	}
}

int func_476(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_594(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_477(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_300(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

bool func_479(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	return !func_473(iParam0, 4);
}

bool func_480(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_481(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_482(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_483(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_595(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_596(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_484(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	int iVar3;
	char* sVar4;
	char* sVar12;

	if (!func_73(iParam0))
	{
		return 0;
	}
	vVar0 = { uParam3, uParam4, uParam5 };
	iVar3 = func_452(iParam0, 1);
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12)
	{
		case 0:
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar3);
			((*Global_1360165)[iParam0 /*1157*/])->f_125 = 0;
			if (func_6(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_454(iParam0, 3);
			}
			else
			{
				if (!func_597(iParam0) && func_598(iParam0, &sVar4))
				{
					_NAMESPACE48::_0x187D65F3AEC5D679(func_450(iParam0, 1), &sVar4);
				}
				func_235(iParam0, 256, 0);
				func_454(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_NAMESPACE48::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_599();
				}
				if (bParam2 && !func_58(vVar0))
				{
					_NAMESPACE48::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_NAMESPACE48::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_600(iParam0, vVar0, fParam6, bParam10))
				{
					return func_599();
				}
				if (func_6(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
				{
					if (_NAMESPACE48::_0x31C70A716CAE1FEE(iVar3) != ((*Global_1360165)[iParam0 /*1157*/])->f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(((*Global_1360165)[iParam0 /*1157*/])->f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					func_454(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_6(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_454(iParam0, 1);
				return func_599();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(((*Global_1360165)[iParam0 /*1157*/])->f_124))
			{
				func_454(iParam0, 3);
			}
			break;
		case 3:
			if (!func_6(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_454(iParam0, 1);
				return func_599();
			}
			if (bParam7)
			{
				if (!func_299(iParam0, ((*Global_1360165)[iParam0 /*1157*/])->f_124, 1))
				{
					return func_599();
				}
			}
			if ((bParam2 && !func_58(vVar0)) && !func_151(vVar0, ENTITY::GET_ENTITY_COORDS(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, false), 1056964608, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::DETACH_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_59(((*Global_1360165)[iParam0 /*1157*/])->f_124, vVar0, fParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					if (func_83(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_76(iParam0, 39, 1);
				func_235(iParam0, 8, 1);
				func_235(iParam0, 64, 0);
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			func_601(((*Global_1360165)[iParam0 /*1157*/])->f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(((*Global_1360165)[iParam0 /*1157*/])->f_124, 1);
			}
			sVar12 = func_603(iParam0, func_602());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				_NAMESPACE48::_0x63AA2B8EB087886A(func_450(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_70 = ((*Global_1360165)[iParam0 /*1157*/])->f_124;
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = 0;
			func_7(iParam0, 40, 0);
			func_235(iParam0, 32, 0);
			func_454(iParam0, 0);
			return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
	}
	return func_599();
}

void func_485(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

void func_486(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (func_450(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_604(func_89(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_605(iParam0);
	}
	else
	{
		func_606(iParam0);
	}
	if (bParam2)
	{
		func_607(iParam0);
	}
	else
	{
		func_608(iParam0);
	}
}

int func_487(int iParam0)
{
	return 1268180497;
}

bool func_488(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_73(iParam0))
	{
		return false;
	}
	func_609(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

char* func_489(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_610(iVar0);
}

char* func_490(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("canoe"):
			return "CANOE";
		case joaat("wagon02x"):
			return "WAGON02X";
		case joaat("wagon04x"):
			return "WAGON04X";
		case joaat("wagon05x"):
			return "WAGON05X";
		case joaat("chuckwagon000x"):
			return "CHUCKWAGON000X";
		case joaat("wagoncircus02x"):
			return "WAGONCIRCUS02X";
		case joaat("coach2"):
			return "COACH2";
		case joaat("privatecoalcar01x"):
			return "PRIVATECOALCAR01X";
		case joaat("northpassenger01x"):
			return "NORTHPASSENGER01X";
		case joaat("privatesteamer01x"):
			return "PRIVATESTEAMER01X";
		case joaat("privatedining01x"):
			return "PRIVATEDINING01X";
		case joaat("utilliwag"):
			return "UTILLIWAG";
		case joaat("skiff"):
			return "SKIFF";
		case joaat("handcart"):
			return "HANDCART";
		case joaat("rowboatswamp"):
			return "ROWBOATSWAMP";
		case joaat("rowboatswamp02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_491(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

int func_492(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_494(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_75(iParam0) || func_83(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_495(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_496(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_611(iVar0);
	func_76(iParam0, 60, 1);
	if (bParam1)
	{
		func_605(iParam0);
	}
}

void func_497(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_612(iVar0);
	func_7(iParam0, 60, 1);
	if (bParam1)
	{
		func_606(iParam0);
	}
}

void func_498(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_613(iVar0);
	if (iParam0 == 14)
	{
		func_614(iVar0);
	}
	func_76(iParam0, 61, 1);
	if (bParam1)
	{
		func_607(iParam0);
	}
}

void func_499(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_615(iVar0);
	func_7(iParam0, 61, 1);
	if (bParam1)
	{
		func_608(iParam0);
	}
}

void func_500(int iParam0)
{
	func_616(iParam0, 1);
	func_616(iParam0, 128);
	func_616(iParam0, 256);
	func_616(iParam0, 512);
	func_616(iParam0, 1024);
	func_616(iParam0, 2048);
	func_616(iParam0, 4096);
	func_616(iParam0, 65536);
	func_616(iParam0, 16384);
	func_616(iParam0, 262144);
	func_616(iParam0, 524288);
	func_616(iParam0, 1048576);
	func_616(iParam0, 2097152);
	func_616(iParam0, 32768);
	func_616(iParam0, 131072);
	func_616(iParam0, 134217728);
	func_616(iParam0, 1073741824);
}

void func_501(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

bool func_502(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_412(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_412(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_157() == -1 && !func_617(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_617(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_412(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_618(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_619(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_620(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 862380358;
		case 1:
			return -624571557;
		case 2:
			return -2106670311;
		case 3:
			return 354018569;
		case 4:
			return -1613499260;
		case 5:
			return -1232184757;
		case 6:
			return -1312036548;
		case 7:
			return 1476138396;
		case 8:
			return 2069287816;
		case 9:
			return -1432916295;
		case 10:
			return -1845132692;
		case 11:
			return 2078646898;
		case 13:
			return 1246854539;
		case 14:
			return 1564353385;
		case 15:
			return 605985418;
		case 16:
			return -1867760364;
		case 17:
			return 1707260254;
		case 18:
			return 1254472765;
		case 19:
			return -283892864;
		case 20:
			return -323279751;
		case 21:
			return -645637806;
		case 22:
			return -429731387;
		case 23:
			return 1605814104;
		case 24:
			return -435322148;
		case 25:
			return -1950029483;
		case 26:
			return 1271180667;
		case 12:
			return 399100316;
	}
	return -1;
}

void func_504(int iParam0, bool bParam1, var uParam2)
{
	if (!func_112(*uParam2))
	{
		uParam2->f_1 = -15;
		return;
	}
	if (!func_621(iParam0, *uParam2, bParam1))
	{
		if (!uParam2->f_2)
		{
			if (func_622(iParam0, *uParam2, bParam1))
			{
			}
		}
	}
	if (uParam2->f_1 == -15 || (uParam2->f_1 != -15 && !func_623(uParam2->f_1)))
	{
		return;
	}
	func_624(iParam0, *uParam2, bParam1);
}

int func_505()
{
	return &Global_1899515;
}

int func_506(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_73(iParam0))
	{
		return 0;
	}
	if (!func_113(iParam0, iParam1, &iVar0, &bVar1))
	{
		return 0;
	}
	if (bVar1)
	{
		return (Global_40.f_4942[iParam0 /*60*/])->f_8.f_2;
	}
	return ((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/])->f_2;
}

int func_507(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_58(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_625(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_626(iVar0, bParam8);
	return iVar0;
}

int func_508(int iParam0)
{
	if (func_69(iParam0))
	{
		if (func_6(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_509(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return "Arthur";
		case joaat("cs_abe"):
			return "Abe";
		case joaat("cs_edmundlowry"):
			return "EdmundLowry";
		case joaat("cs_aberdeenpigfarmer"):
			return "ABERDEENPIGFARMER";
		case joaat("cs_aberdeensister"):
			return "ABERDEENSISTER";
		case joaat("cs_abigailroberts"):
			return "AbigailRoberts";
		case joaat("cs_albertmason"):
			return "AlbertMason";
		case joaat("cs_archiedown"):
			return "ArchieDown";
		case joaat("cs_baptiste"):
			return "Baptiste";
		case joaat("cs_bartholomewbraithwaite"):
			return "BartholomewBraithwaite";
		case joaat("cs_beatenupcaptain"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("cs_beaugray"):
			return "BeauGray";
		case joaat("cs_penelopebraithwaite"):
			return "PenelopeBraithwaite";
		case joaat("cs_billwilliamson"):
			return "BillWilliamson";
		case joaat("cs_braithwaiteservant"):
			return "BraithwaiteServant";
		case joaat("cs_catherinebraithwaite"):
			return "CatherineBraithwaite";
		case joaat("cs_charlessmith"):
			return "CharlesSmith";
		case joaat("cs_cigcardguy"):
			return "CS_CIGCARDGUY";
		case joaat("cs_dinoboneslady"):
			return "CS_DINOBONESLADY";
		case joaat("cs_cleet"):
			return "Cleet";
		case joaat("cs_colmodriscoll"):
			return "ColmODriscoll";
		case joaat("cs_creoleguy"):
			return "CreoleGuy";
		case joaat("cs_sddoctor_01"):
			return "SDDoctor_01";
		case joaat("cs_dalemaroney"):
			return "DaleMaroney";
		case joaat("cs_dutch"):
			return "Dutch";
		case joaat("cs_edithdown"):
			return "EdithDown";
		case joaat("cs_fussar"):
			return "Fussar";
		case joaat("cs_fishcollector"):
			return "cs_fishcollector";
		case joaat("cs_bronte"):
			return "Bronte";
		case joaat("cs_guidomartelli"):
			return "GuidoMartelli";
		case joaat("u_m_m_nbxbrontegoon_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("g_m_m_unibrontegoons_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("cs_garethbraithwaite"):
			return "GarethBraithwaite";
		case joaat("cs_genstoryfemale"):
			return "GenStoryFemale";
		case joaat("cs_genstorymale"):
			return "GenStoryMale";
		case joaat("cs_leon"):
			return "Leon";
		case joaat("cs_geraldbraithwaite"):
			return "GeraldBraithwaite";
		case joaat("cs_hoseamatthews"):
			return "HoseaMatthews";
		case joaat("cs_jackmarston"):
			return "JackMarston";
		case joaat("cs_jackmarston_teen"):
			return "JackMarston_Teen";
		case joaat("cs_jamie"):
			return "Jamie";
		case joaat("cs_javierescuella"):
			return "JavierEscuella";
		case joaat("cs_jimcalloway"):
			return "JimCalloway";
		case joaat("cs_joe"):
			return "Joe";
		case joaat("cs_johnmarston"):
			return "JohnMarston";
		case joaat("cs_johnweathers"):
			return "CS_JOHNWEATHERS";
		case joaat("cs_josiahtrelawny"):
			return "JosiahTrelawny";
		case joaat("cs_karen"):
			return "Karen";
		case joaat("cs_mrsadler"):
			return "MrsAdler";
		case joaat("cs_kieran"):
			return "Kieran";
		case joaat("cs_leostrauss"):
			return "LeoStrauss";
		case joaat("cs_londonderryson"):
			return "LondonderrySon";
		case joaat("cs_marybeth"):
			return "MaryBeth";
		case joaat("cs_marylinton"):
			return "MaryLinton";
		case joaat("cs_micahbell"):
			return "MicahBell";
		case joaat("cs_mollyoshea"):
			return "MollyOshea";
		case joaat("cs_mrlinton"):
			return "CS_MrLinton";
		case joaat("cs_mrpearson"):
			return "MrPearson";
		case joaat("cs_mrslondonderry"):
			return "MrsLondonderry";
		case joaat("cs_mud2bigguy"):
			return "Mud2BigGuy";
		case joaat("cs_professorbell"):
			return "ProfessorBell";
		case joaat("cs_revswanson"):
			return "RevSwanson";
		case joaat("cs_samaritan"):
			return "CS_Samaritan";
		case joaat("cs_strdeputy_01"):
			return "StrDeputy_01";
		case joaat("cs_strdeputy_02"):
			return "StrDeputy_02";
		case joaat("cs_strsheriff_01"):
		case joaat("u_m_m_strsherriff_01"):
			return "StrSheriff_01";
		case joaat("cs_susangrimshaw"):
			return "SusanGrimshaw";
		case joaat("cs_tavishgray"):
			return "TavishGray";
		case joaat("cs_theodorelevin"):
			return "TheodoreLevin";
		case joaat("cs_thomasdown"):
			return "ThomasDown";
		case joaat("cs_tilly"):
			return "Tilly";
		case joaat("cs_uncle"):
			return "Uncle";
		case joaat("g_m_m_unicriminals_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("g_m_m_uniduster_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("cs_valsheriff"):
			return "CS_VALSHERIFF";
		case joaat("s_m_m_marshallsrural_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("u_m_o_vhtexoticshopkeeper_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("cs_sean"):
			return "Sean";
		case joaat("cs_lenny"):
			return "Lenny";
		case joaat("cs_hercule"):
			return "Hercule";
		case joaat("cs_creolecaptain"):
			return "CreoleCaptain";
		case joaat("u_m_m_creolecaptain_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("cs_ringmaster"):
			return "RingMaster";
		case joaat("u_m_m_valbartender_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("a_m_m_emrfarmhand_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("a_m_m_grisurvivalist_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("cs_lillymillet"):
			return "LillyMillet";
		case joaat("a_f_m_strtownfolk_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("a_m_m_strtownfolk_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("s_m_m_strlumberjack_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("g_m_m_unicriminals_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("g_m_m_unicornwallgoons_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("a_m_m_nbxupperclass_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("a_f_m_nbxupperclass_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("a_m_m_valfarmer_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("a_m_m_valtownfolk_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("a_m_m_valtownfolk_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("a_f_m_valtownfolk_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("u_m_m_nbxbartender_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("cs_nbxexecuted"):
			return "NBXExecuted";
		case joaat("cs_rhodeputy_01"):
			return "RHODEPUTY_01";
		case joaat("u_m_m_rhdsheriff_01"):
			return "RHDSHERIFF_01";
		case joaat("cs_leighgray"):
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case joaat("u_m_m_strgenstoreowner_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("cs_tomdickens"):
			return "TomDickens";
		case joaat("cs_davidgeddes"):
			return "DavidGeddes";
		case joaat("cs_ansel_atherton"):
			return "ANSEL_ATHERTON";
		case joaat("cs_wrobel"):
			return "CS_Wrobel";
		case joaat("a_c_cow"):
			return "COW";
		case joaat("a_c_bull_01"):
			return "BULL";
		case joaat("cs_albertcakeesquire"):
			return "ALBERTCAKEESQUIRE";
		case joaat("u_m_o_blwgeneralstoreowner_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("a_c_dogcatahoulacur_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("a_c_dogrufus_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("a_c_doglion_01"):
			return "A_C_DOGLION_01";
		case joaat("cs_tigerhandler"):
			return "Handler";
		case joaat("cs_valauctionboss_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("cs_nbxreceptionist_01"):
			return "NbxReceptionist_01";
		case joaat("u_m_m_bivforeman_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("u_m_m_racforeman_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("cs_chainprisoner_01"):
			return "CHAINPRISONER_01";
		case joaat("cs_chainprisoner_02"):
			return "CHAINPRISONER_02";
		case joaat("u_m_m_valpokerplayer_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("u_m_m_valpokerplayer_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("cs_duncangeddes"):
			return "DUNCANGEDDES";
		case joaat("cs_angusgeddes"):
			return "ANGUSGEDDES";
		case joaat("cs_evelynmiller"):
			return "EvelynMiller";
		case joaat("cs_sistercalderon"):
			return "SISTERCALDERON";
		case joaat("cs_edgarross"):
			return "EDGARROSS";
		case joaat("cs_wintonholmes"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("u_f_m_rkshomesteadtenant_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("cs_rockyseven_widow"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("u_m_m_bht_strawberryduel"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("u_m_m_rhdtrainstationworker_01"):
			return "StationWorker";
		case joaat("cs_levisimon"):
			return "LEVISIMON";
		case joaat("s_m_m_fussarhenchman_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("a_c_donkey_01"):
			return "A_C_DONKEY_01";
		case joaat("a_m_m_guatownfolk_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("a_m_o_guatownfolk_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("u_m_o_valbartender_01"):
			return "U_M_O_ValBartender_01";
		case joaat("u_m_m_nbxbartender_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("cs_unidusterjail_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("a_m_m_rhdtownfolk_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("u_m_m_unibountyhunter_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("u_m_m_unibountyhunter_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("cs_brotherdorkins"):
			return "BrotherDorkins";
		case joaat("g_m_m_unibraithwaites_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("a_m_m_gamhighsociety_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("u_m_m_strfreightstationowner_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("cs_eagleflies"):
			return "EagleFlies";
		case joaat("cs_rainsfall"):
			return "CS_RAINSFALL";
		case joaat("a_m_m_wapwarriors_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("a_m_y_nbxstreetkids_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("u_m_m_bht_shackescape"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("a_m_m_htlroughtravellers_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("cs_lemiuxassistant"):
			return "LemiuxAssistant";
		case joaat("p_keys01x"):
			return "p_keys01x";
		case joaat("cs_balloonoperator"):
			return "CS_BALLOONOPERATOR";
		case joaat("a_m_m_bivworker_01"):
			return "Worker1";
		case joaat("u_m_m_bht_mineforeman"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("a_m_m_nbxslums_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("cs_sdpriest"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("a_c_bear_01"):
			return "A_C_BEAR_01";
		case joaat("cs_marshall_thurwell"):
			return "MARSHALL_THURWELL";
		case joaat("cs_famousgunslinger_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("cs_sd_streetkid_01"):
			return "cs_sd_streetkid_01";
		case joaat("cs_sd_streetkid_02"):
			return "cs_sd_streetkid_02";
		case joaat("cs_obediahhinton"):
			return "ObediahHinton";
		case joaat("cs_poisonwellshaman"):
			return "PoisonWellShaman";
		case joaat("cs_cooper"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("u_m_m_bht_benedictallbright"):
			return "u_m_m_bht_benedictallbright";
		case joaat("cs_jules"):
			return "Jules";
		case joaat("cs_mrdevon"):
			return "MRDEVON";
		case joaat("cs_mrwayne"):
			return "MRWAYNE";
		case joaat("cs_paytah"):
			return "PAYTAH";
		case joaat("cs_valdeputy_01"):
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case joaat("a_m_m_nbxdockworkers_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("u_m_m_valsheriff_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("s_m_m_bankclerk_01"):
			return "S_M_M_BANKCLERK_01";
		case joaat("u_m_m_nbxbronteasc_01"):
			return "U_M_M_NBXBRONTEASC_01";
		case joaat("p_c_horse_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_510(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_511(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_512(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_513(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_156, sParam1, iParam2, iParam3);
}

void func_514(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

int func_515(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_627((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_516(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_517(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_518(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_290((*uParam0)[iVar0 /*17*/]))
		{
			func_481((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_519(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_520(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_13(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_219(iParam0, 0);
		}
	}
}

int func_521(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_628(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_12(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_481((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_522(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_629(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_523(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_524(int* iParam0, int* iParam1)
{
	if (!func_378(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_481(iParam1, 19);
			func_146(iParam0, 23);
			func_630(iParam1, 2);
		}
	}
}

int func_525(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_631(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_632(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_526(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_628(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_527()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

var func_528()
{
	return Global_1935689->f_1;
}

var func_529()
{
	return &Global_1357517;
}

void func_530(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_481((*uParam0)[iVar0 /*17*/], 9);
		iVar0++;
	}
}

var func_531(int iParam0)
{
	return (func_633(iParam0, 4) || func_633(iParam0, 5));
}

int func_532(int iParam0)
{
	return func_633(iParam0, 7);
}

int func_533(int iParam0)
{
	return func_633(iParam0, 6);
}

void func_534(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_290(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_628(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_535(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_634(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_479(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_186(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_186(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_635(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_536(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_636(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_637(iParam1, 1))
	{
		func_638(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_537(int* iParam0, var uParam1, var uParam2, float fParam3, char* sParam4)
{
	func_387(uParam1, 1, 1, 1, 0);
	func_218(uParam2);
	MISC::_0x870708A6E147A9AD(*uParam2, sParam4, fParam3, 0, 8, 0, 0, 0, 0, -1);
}

int func_538(int* iParam0, float fParam1, var uParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (uParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_539(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_540(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_541(var uParam0)
{
	if (-1829635046 == func_639(81053684))
	{
		if (func_640(uParam0))
		{
			return 1;
		}
	}
	else if (func_641(-525676072, uParam0))
	{
		if (func_640(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_542()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_642())
	{
		return 0;
	}
	if (!func_640(&iVar0))
	{
		return 0;
	}
	if (!func_643(iVar0))
	{
		return 0;
	}
	iVar1 = func_644(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_645(&iVar2, 1);
	return func_646(iVar0, iVar2);
}

int func_543()
{
	int iVar0;
	int iVar1;

	if (!func_640(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = func_644(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_648(&(Global_1946804->f_57[func_647(iVar1, 1) /*11*/]), 8);
	func_649(26, 0, 0, 0, 0);
	return 1;
}

int func_544(var uParam0, float fParam1)
{
	if (func_405(uParam0, fParam1))
	{
		func_86(uParam0);
		return 1;
	}
	return 0;
}

void func_545(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

void func_546(int iParam0)
{
	if (func_650())
	{
		Global_1357509 = 1;
	}
	if (func_651(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_547(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_548()
{
	if (func_157() == -1 && func_95(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return 0;
}

int func_549(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_550(int iParam0)
{
	int iVar0;

	iVar0 = func_107(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return ((*Global_1945938)[iVar0 /*18*/])->f_3;
}

Vector3 func_551(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_652(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

int func_553(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_554(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

void func_555(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_560(*uParam0, -1);
		func_561(*uParam0, 0);
		func_562(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

int func_556(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

void func_557(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_0xB059D7BD3D78C16F(&(Global_36307[iParam0]), iParam1);
		}
	}
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

void func_560(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_561(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_562(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

float func_563()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_653())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_654(2);
	}
	if (Global_1347477->f_119)
	{
		return func_654(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_655();
	fVar2 = func_656();
	fVar3 = func_657();
	fVar4 = func_658();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_659()));
	fVar7 = (func_654(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_660(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_661(3, fVar9, fVar9 > 100f);
	return func_662(fVar7, -100f, 100f);
}

float func_564()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_653())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_654(1);
	}
	if (Global_1347477->f_119)
	{
		return func_654(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_655();
	fVar2 = func_656();
	fVar3 = func_657();
	fVar4 = func_658();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_659()));
	fVar7 = (func_654(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_660(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_661(2, fVar9, fVar9 > 100f);
	return func_662(fVar7, -100f, 100f);
}

float func_565()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_653())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_654(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_663())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_664())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_654(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_655();
	fVar2 = func_656();
	fVar3 = func_657();
	fVar4 = func_658();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_659()));
	fVar7 = (func_654(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_660(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_661(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_654(0);
	}
	return func_662(fVar7, -100f, 100f);
}

void func_566()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_567(var uParam0)
{
	return *uParam0;
}

void func_568(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156)) || func_165(uParam0, 512))
	{
		if (!func_665(uParam0->f_213, 128))
		{
			func_666();
		}
		return;
	}
	if ((func_307(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, func_362(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, func_362(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!func_665(uParam0->f_213, 128))
		{
			func_666();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_667(iVar1))
		{
			if (func_479(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_665(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_668(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_156);
		func_666();
	}
}

void func_569(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_567(uParam0) == 2 && (func_669(uParam0->f_212, 16384) || func_165(uParam0, 268435456)))
	{
		Var0 = { func_183(uParam0) };
		func_670(uParam0, &Var0);
	}
	func_671(uParam0, sParam1);
	if (func_165(uParam0, 131072))
	{
		func_672(uParam0, 0);
	}
	if (func_673())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_674();
	}
	if (func_650())
	{
		func_546(1);
	}
	func_179(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_675(uParam0, cVar8);
	func_574(1, 0);
	func_173(uParam0);
	if (func_571(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_676(uParam0);
	func_370(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_156);
	Global_43799 = uParam0->f_156;
	StringCopy(&Global_43801, sParam1, 24);
}

void func_570(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_38(&(uParam0->f_1));
}

bool func_571(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

int func_572(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_586(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_573(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_574(bool bParam0, int iParam1)
{
	if (func_677())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_678())
		{
			func_679(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_575(var uParam0)
{
	vector3 vVar0;

	if (!func_165(uParam0, 4))
	{
		if (func_669(uParam0->f_212, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_680(uParam0) };
		if (!func_669(uParam0->f_212, 524288))
		{
			func_681(&(uParam0->f_224));
		}
		func_682(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_683(uParam0, 0f, 0f, 0f);
		func_684(uParam0);
		func_685(uParam0);
		func_686(uParam0, 0f, 0f, 0f, 0, 0);
		func_687(uParam0);
		func_168(uParam0, 4);
		func_688(uParam0, 0);
		func_689(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_225)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_225));
		}
	}
}

int func_576(var uParam0, int iParam1)
{
	if (func_165(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, "ExportCamera") && iParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_156))
	{
		func_168(uParam0, 262144);
		func_688(uParam0, 1);
		return 1;
	}
	return 0;
}

int func_577(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_156) * 1000f));
}

int func_578(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_156) * 1000f));
}

int func_579(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_156, 0))
	{
		if (func_165(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return 1;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_156) && func_165(uParam0, 1048576))
	{
		return 1;
	}
	return 0;
}

void func_580(var uParam0)
{
	if (((func_165(uParam0, 1073741824) && !func_165(uParam0, 524288)) && func_165(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_581(var uParam0)
{
	if (!func_165(uParam0, 536870912))
	{
		func_688(uParam0, 1);
		func_582(&(uParam0->f_213), uParam0->f_224);
		func_172();
		func_168(uParam0, 536870912);
	}
	if (func_165(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_690(uParam0);
	func_570(uParam0, 1);
	func_174(uParam0);
	func_691(uParam0);
	func_692(uParam0);
	func_693(uParam0, 4);
	func_178(uParam0);
	func_672(uParam0, 1);
	func_173(uParam0);
	func_86(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	func_694(!func_665(uParam0->f_213, 128));
	if (!func_665(uParam0->f_213, 128))
	{
		func_666();
	}
}

void func_582(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_695(2000);
	Global_16 = 0;
	func_696();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_665(*uParam0, 8));
	if (!func_665(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_665(*uParam0, 2) || func_665(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_665(*uParam0, 16))
	{
		func_697(1);
	}
	if (func_665(*uParam0, 32))
	{
		func_698(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_699(-1623728698, 0);
	}
	func_689(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_583()
{
	Global_1935630->f_52 = 1;
}

char* func_584(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_585()
{
	if (func_157() != -1)
	{
		return false;
	}
	return func_230(1) > 0;
}

float func_586(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_587(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_73(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_73(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_588(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_73(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_450(iParam0, 1);
		iVar1 = _NAMESPACE48::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
		_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_589(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_590(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_591(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_592(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_593(int iParam0, var uParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_1154 = uParam1;
}

int func_594(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

float func_595(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_596(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_597(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_598(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return 1;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return 1;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return 1;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return 1;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return 1;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return 1;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return 1;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return 1;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return 1;
	}
	return 0;
}

int func_599()
{
	return -1;
}

int func_600(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return 0;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_125 <= 300)
		{
			if (_NAMESPACE48::_0xEB98B38CA60742D7(((*Global_1360165)[iParam0 /*1157*/])->f_126))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
			if (bParam5)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x08FC896D2CB31FCC(((*Global_1360165)[iParam0 /*1157*/])->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x0CADC3A977997472(((*Global_1360165)[iParam0 /*1157*/])->f_126, 0);
			}
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			((*Global_1360165)[iParam0 /*1157*/])->f_125++;
		}
		else
		{
			iVar0 = _NAMESPACE48::_0xA00DF706C60173D1(func_450(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = func_700(iVar0, vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				_NAMESPACE48::_0x7B204F88F6C3D287(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
		}
		if (!func_6(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			return 0;
		}
		Global_1359489->f_12 = 1;
		func_235(iParam0, 256, 0);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_601(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_702(iParam0, func_701(iParam1));
	if (func_298(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_41(iParam1)))
	{
		PED::_0x931B241409216C1F(func_41(iParam1), iParam0, 0);
		PED::_0xED1C764997A86D5A(func_41(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		func_76(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, -1856989775);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (func_298(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
	func_486(iParam1, func_298(iParam1, 8192), func_298(iParam1, 16384), 1);
}

int func_602()
{
	if (func_157() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

char* func_603(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_604(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_662(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

void func_605(int iParam0)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_450(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_89(iParam0);
	func_611(iVar0);
	func_235(iParam0, 8192, 1);
}

void func_606(int iParam0)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_450(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_89(iParam0);
	func_612(iVar0);
	func_235(iParam0, 8192, 0);
}

void func_607(int iParam0)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_450(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_89(iParam0);
	func_613(iVar0);
	func_235(iParam0, 16384, 1);
}

void func_608(int iParam0)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_450(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_89(iParam0);
	func_615(iVar0);
	func_235(iParam0, 16384, 0);
}

int func_609(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_703(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

char* func_610(int iParam0)
{
	switch (iParam0)
	{
		case joaat("p_cs_ledger01x"):
			return "P_CS_LEDGER01X";
		case joaat("p_cs_rope01x"):
			return "P_CS_ROPE01X";
		case joaat("p_door01x"):
			return "P_DOOR01X";
		case joaat("p_door03x"):
			return "P_DOOR03X";
		case joaat("p_door12x"):
			return "p_door12x";
		case joaat("p_door13x"):
			return "P_DOOR13X";
		case joaat("p_door45x"):
			return "p_door45x";
		case joaat("p_chairvictorian01x"):
			return "p_chairvictorian01x";
		case joaat("p_crate03x"):
			return "p_crate03x";
		case joaat("p_cs_jug01x"):
			return "p_cs_jug01x";
		case joaat("p_cs_wagon02x"):
			return "p_cs_wagon02x";
		case joaat("p_door37x"):
			return "P_DOOR37X";
		case joaat("p_door_val_genstore"):
			return "p_door_val_genstore";
		case joaat("p_doorstrawberry01x"):
			return "p_doorstrawberry01x";
		case joaat("p_doorfrench01l"):
			return "p_doorfrench01l";
		case joaat("p_doorfrench01r"):
			return "p_doorfrench01r";
		case joaat("p_doormansiongate01x"):
			return "p_doormansiongate01x";
		case joaat("p_doornbd39x"):
			return "p_doornbd39x";
		case joaat("p_doorsaloon02x"):
			return "p_doorsaloon02x";
		case joaat("p_doorvh_saloon_l"):
			return "P_DOORVH_SALOON_L";
		case joaat("p_doorvh_saloon_r"):
			return "P_DOORVH_SALOON_R";
		case joaat("p_cigarlit01x"):
			return "p_cigarlit01x";
		case joaat("p_pebble01x"):
			return "p_pebble01x";
		case joaat("p_cs_rope03x"):
			return "p_cs_rope03x";
		case joaat("p_cards01x"):
			return "P_CARDS01X";
		case joaat("p_cs_pokerhand01x"):
			return "P_CS_POKERHAND01X";
		case joaat("p_cs_pokerhand02x"):
			return "P_CS_POKERHAND02X";
		case joaat("p_cs_holdemhand01x"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("p_cs_holdemhand02x"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("p_cs_bucket01x"):
			return "P_CS_BUCKET01X";
		case joaat("p_cs_syringe01x"):
			return "p_cs_syringe01x";
		case joaat("p_bottlejd01x"):
			return "p_bottleJD01x";
		case joaat("p_rag02x"):
			return "p_rag02x";
		case joaat("p_magneto02x"):
			return "p_magneto02x";
		case joaat("p_magneto01x"):
			return "p_magneto01x";
		case joaat("p_cs_wantedalive01x"):
			return "p_cs_wantedalive01x";
		case joaat("p_cs_rcridethelightning"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("p_pen01x"):
			return "p_pen01x";
		case joaat("p_cs_letter01a_x"):
			return "p_cs_letter01a_x";
		case joaat("p_cs_electricchair01x"):
			return "p_cs_electricchair01x";
		case joaat("p_cs_generator01x"):
			return "p_cs_generator01x";
		case joaat("p_cs_electrichelmet01x"):
			return "p_cs_electricHelmet01x";
		case joaat("p_cs_gag01x"):
			return "p_cs_gag01x";
		case joaat("p_door_sha_man01x"):
			return "p_door_sha_man01x";
		case joaat("p_stool01x"):
			return "p_stool01x";
		case joaat("p_stool02x"):
			return "p_stool02x";
		case joaat("p_jugglingball01x"):
			return "p_jugglingball01x";
		case joaat("p_chair02x"):
			return "p_chair02x";
		case joaat("p_chair04x"):
			return "p_chair04x";
		case joaat("p_crate15x"):
			return "p_crate15x";
		case joaat("p_cleaver01x"):
			return "p_cleaver01x";
		case joaat("p_bottle003x"):
			return "p_bottle003x";
		case joaat("p_cs_book02x"):
			return "p_cs_book02x";
		case joaat("p_stickydymt_single"):
			return "p_stickydymt_single";
		case joaat("p_cs_fusedynamite01x"):
			return "p_cs_fusedynamite01x";
		case joaat("p_dynamite01x"):
			return "p_dynamite01x";
		case joaat("p_cs_fusespool01x"):
			return "p_cs_fusespool01x";
		case joaat("p_cs_detonator01x"):
			return "p_cs_detonator01x";
		case joaat("p_cs_bedrollclsd01x"):
			return "p_cs_bedrollclsd01x";
		case joaat("p_cigarette_cs01x"):
			return "P_CIGARETTE_CS01X";
		case joaat("p_matches01x"):
			return "P_MATCHES01X";
		case joaat("p_matchstick01x"):
			return "P_MATCHSTICK01X";
		case joaat("p_woodenchair01x"):
			return "P_WOODENCHAIR01X";
		case joaat("p_chair_crate02x"):
			return "P_CHAIR_CRATE02X";
		case joaat("p_knittingneedle01x"):
			return "p_knittingneedle01x";
		case joaat("p_knittingsquare01x"):
			return "p_knittingsquare01x";
		case joaat("p_cs_rabbitmeat01x"):
			return "p_cs_rabbitMeat01x";
		case joaat("p_cs_rabbitmeat02x"):
			return "p_cs_rabbitMeat02x";
		case joaat("p_bottle03x"):
			return "p_bottle03x";
		case joaat("p_cs_billstack01x"):
			return "p_cs_billstack01x";
		case joaat("p_cs_billsingle01x"):
			return "p_cs_billSingle01x";
		case joaat("p_binoculars01x"):
			return "p_binoculars01x";
		case joaat("p_doorrhosheriff02x"):
			return "p_doorrhosheriff02x";
		case joaat("p_barstool01x"):
			return "P_BARSTOOL01X";
		case joaat("p_cs_shotglass01x"):
			return "p_cs_shotglass01x";
		case joaat("p_lamp18x"):
			return "p_lamp18x";
		case joaat("p_clock06x"):
			return "p_clock06x";
		case joaat("p_bottle02x"):
			return "p_bottle02x";
		case joaat("p_cs_lootsack01x"):
			return "p_cs_lootSack01x";
		case joaat("p_winebox01x"):
			return "p_wineBox01x";
		case joaat("p_strongbox01x"):
			return "p_strongBox01x";
		case joaat("p_clocktable02x"):
			return "P_CLOCKTABLE02X";
		case joaat("p_gen_statue03b"):
			return "p_gen_statue03b";
		case joaat("p_stoolwinter01x"):
			return "P_STOOLWINTER01X";
		case joaat("p_cs_barrag01x"):
			return "P_CS_BARRAG01X";
		case joaat("p_plate01x"):
			return "P_PLATE01X";
		case joaat("p_knife01x"):
			return "P_KNIFE01X";
		case joaat("p_knife02x"):
			return "P_KNIFE02X";
		case joaat("p_cs_catfish_whole01x"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("p_cs_catfish_whole01bx"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("p_woodwhittle01x"):
			return "P_WOODWHITTLE01X";
		case joaat("p_stickfirepoker01x"):
			return "P_STICKFIREPOKER01X";
		case joaat("p_cs_woodpile01x"):
			return "P_CS_WOODPILE01X";
		case joaat("p_fork01x"):
			return "P_FORK01X";
		case joaat("p_knife04x"):
			return "P_KNIFE04X";
		case joaat("p_knife03x"):
			return "p_knife03x";
		case joaat("p_cs_bottleslim01x"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("p_cs_blanket01x"):
			return "P_CS_BLANKET01X";
		case joaat("p_bedrollclosed01x"):
			return "P_BEDROLLCLOSED01X";
		case joaat("p_cs_kindling01x"):
			return "P_CS_KINDLING01X";
		case joaat("p_cigarthin01x"):
			return "P_CIGARTHIN01X";
		case joaat("p_door_wglass01x"):
			return "p_door_wglass01x";
		case joaat("p_broom02x"):
			return "p_broom02x";
		case joaat("p_amb_clipboard_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("p_chair07x"):
			return "P_CHAIR07X";
		case joaat("p_cs_cratetnt01x"):
			return "p_cs_cratetnt01x";
		case joaat("p_cs_flourbag01x"):
			return "p_cs_flourbag01x";
		case joaat("p_cs_supplies01x"):
			return "p_cs_supplies01x";
		case joaat("p_cs_supplies02x"):
			return "p_cs_supplies02x";
		case joaat("p_cs_supplies03x"):
			return "p_cs_supplies03x";
		case joaat("p_door04x"):
			return "p_door04x";
		case joaat("p_door11x"):
			return "p_door11x";
		case joaat("p_doorrhosaloon01_l"):
			return "p_doorrhosaloon01_l";
		case joaat("p_doorrhosaloon01_r"):
			return "p_doorrhosaloon01_r";
		case joaat("p_val_gate2m02x"):
			return "P_VAL_GATE2M02X";
		case joaat("p_cs_stmdnky01x"):
			return "P_CS_STMDNKY01X";
		case joaat("p_cs_hookpulley01x"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("p_chair_cs05x"):
			return "P_CHAIR_CS05X";
		case joaat("p_chair18x"):
			return "P_CHAIR_18X";
		case joaat("p_chair19x"):
			return "P_CHAIR19X";
		case joaat("p_chair20x"):
			return "P_CHAIR20X";
		case joaat("p_chair05x"):
			return "P_CHAIR05X";
		case joaat("p_chair22x"):
			return "p_chair22x";
		case joaat("p_glass01x"):
			return "p_glass01x";
		case joaat("p_diningchairs01x"):
			return "P_DININGCHAIRS01X";
		case joaat("p_windsorchair03x"):
			return "P_WINDSORCHAIR03X";
		case joaat("p_windsorchair02x"):
			return "P_WINDSORCHAIR02X";
		case joaat("p_door_val_jail02x"):
			return "p_door_val_jail02x";
		case joaat("p_cratetnt01x"):
			return "P_CRATETNT01X";
		case joaat("p_cratetnt02x"):
			return "P_CRATETNT02X";
		case joaat("p_moneystack01x"):
			return "P_MONEYSTACK01X";
		case joaat("p_axe01x"):
			return "P_AXE01X";
		case joaat("p_hoe01x"):
			return "P_HOE01X";
		case joaat("p_shovel01x"):
			return "P_SHOVEL01X";
		case joaat("p_shovel04x"):
			return "P_SHOVEL04X";
		case joaat("p_broom01x"):
			return "P_BROOM01X";
		case joaat("p_pitchfork01x"):
			return "P_PITCHFORK01X";
		case joaat("p_scythe01x"):
			return "P_SCYTHE01X";
		case joaat("p_skiff02x"):
			return "P_SKIFF02x";
		case joaat("p_door_nbx_doc01x_l"):
			return "p_door_nbx_doc01x_l";
		case joaat("p_door_nbx_doc01x_r"):
			return "p_door_nbx_doc01x_r";
		case joaat("p_cs_camera"):
			return "p_cs_camera";
		case joaat("p_cs_cameratripod"):
			return "p_cs_cameratripod";
		case joaat("p_cs_camerabag01x"):
			return "p_cs_camerabag01x";
		case joaat("p_cameraflash01x"):
			return "p_cameraflash01x";
		case joaat("p_cs_shutterrelease"):
			return "p_cs_shutterrelease";
		case joaat("rowboatswamp"):
			return "rowboatswamp";
		case joaat("p_chair25x"):
			return "P_CHAIR25X";
		case joaat("p_doorbrait01bx"):
			return "P_DOORBRAIT01BX";
		case joaat("p_cs_map01x"):
			return "P_CS_MAP01X";
		case joaat("p_hammer03x"):
			return "p_hammer03x";
		case joaat("p_cs_nailbarrel01x"):
			return "p_cs_nailbarrel01x";
		case joaat("p_cs_book04x"):
			return "p_cs_book04x";
		case joaat("p_cs_fan01x"):
			return "p_cs_Fan01x";
		case joaat("p_cs_ledgersmall01x"):
			return "p_cs_ledgerSmall01x";
		case joaat("p_cs_envelope01x"):
			return "p_cs_envelope01x";
		case joaat("p_wrappedmeat01x"):
			return "p_wrappedmeat01x";
		case joaat("p_cs_letter02x"):
			return "P_CS_LETTER02X";
		case joaat("p_cs_book03x"):
			return "p_cs_book03x";
		case joaat("p_cs_giftbox01x"):
			return "p_cs_giftBox01x";
		case joaat("p_boiler01x"):
			return "p_boiler01x";
		case joaat("p_boiler02x"):
			return "p_boiler02x";
		case joaat("p_mugcoffee01x"):
			return "p_mugCoffee01x";
		case joaat("p_glasstallbeer01x"):
			return "p_glasstallbeer01x";
		case joaat("p_pitcher02x"):
			return "p_pitcher02x";
		case joaat("p_tray03x"):
			return "p_tray03x";
		case joaat("p_sit_chairwicker01b"):
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case joaat("p_ladle02x"):
			return "P_LADLE02X";
		case joaat("p_cs_pot01x"):
			return "P_CS_POT01X";
		case joaat("p_chairdining03x"):
			return "P_CHAIRDINING03X";
		case joaat("p_spoon01x"):
			return "P_SPOON01X";
		case joaat("p_bowl03x"):
			return "P_BOWL03X";
		case joaat("p_cs_bridecatalogue01x"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("p_jewelrybox02bx"):
			return "P_JEWELRYBOX02BX";
		case joaat("p_cs_letterfolded01x"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("p_cs_arthurhat01x"):
			return "P_CS_ARTHURHAT01X";
		case joaat("p_oar03x"):
			return "P_OAR03X";
		case joaat("p_door_val_bankvault"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("p_door_combank01x"):
			return "P_DOOR_COMBANK01X";
		case joaat("p_cs_donation01x"):
			return "P_CS_DONATION01X";
		case joaat("p_door_nbx_bank03x_r"):
			return "p_door_nbx_bank03x_R";
		case joaat("p_door_nbx_bank03x_l"):
			return "p_door_nbx_bank03x_L";
		case joaat("p_camp_plate_02x"):
			return "p_camp_plate_02x";
		case joaat("p_stewplate02x"):
			return "p_stewplate02x";
		case joaat("p_cs_log01x"):
			return "p_cs_log01x";
		case joaat("p_ndb_hotelplank01x"):
			return "p_ndb_hotelplank01x";
		case joaat("p_glass06x"):
			return "p_glass06x";
		case joaat("p_cs_rag01x"):
			return "p_cs_rag01x";
		case joaat("p_inkwell01x"):
			return "p_inkwell01x";
		case joaat("p_cigar02x"):
			return "p_cigar02x";
		case joaat("p_bottlebeer01x"):
			return "p_bottleBeer01x";
		case joaat("p_beermugglass01x"):
			return "p_beermugglass01x";
		case joaat("p_nutbowl01x"):
			return "p_nutBowl01x";
		case joaat("p_cs_sacklarge01x"):
			return "p_cs_sacklarge01x";
		case joaat("p_cs_dressbox01x"):
			return "p_cs_dressbox01x";
		case joaat("p_bell05x"):
			return "p_bell05x";
		case joaat("p_woodendeskchair01x"):
			return "p_woodendeskchair01x";
		case joaat("p_chair06x"):
			return "p_chair06x";
		case joaat("p_jug01x"):
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case joaat("p_bottleslim01x"):
			return "p_bottleslim01x";
		case joaat("p_cs_journal01x"):
			return "p_cs_journal01x";
		case joaat("p_mortarpestle02x"):
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case joaat("p_cs_ropelegsplit"):
			return "p_cs_ropeLegSplit";
		case joaat("p_cs_ropehandssplit"):
			return "p_cs_ropeHandsSplit";
		case joaat("p_fishingpole01x"):
			return "p_fishingpole01x";
		case joaat("p_fishingpole02x"):
			return "P_FISHINGPOLE02X";
		case joaat("p_cs_flowernecklace"):
			return "p_cs_flowernecklace";
		case joaat("p_cs_flowers01x"):
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case joaat("p_cs_fishingpolebag01x"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("p_stick02x"):
			return "P_STICK02X";
		case joaat("p_cs_sock01x"):
			return "P_CS_SOCK01X";
		case joaat("p_door_val_bank00_rx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_door_val_bank00_lx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_can10x"):
			return "p_can10x";
		case joaat("p_cs_rabbitgut"):
			return "p_cs_rabbitgut";
		case joaat("p_cs_rabbitheadless"):
			return "p_cs_rabbitheadless";
		case joaat("p_cs_rabbitfeetless"):
			return "p_cs_rabbitfeetless";
		case joaat("p_kettle03x"):
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case joaat("p_cs_bookhardcv01x"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("p_letterbundle_01x"):
			return "P_LETTERBUNDLE_01X";
		case joaat("p_letterenvelope_cs01x"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("p_package08x"):
			return "P_PACKAGE08X";
		case joaat("p_cigarbox02x"):
			return "P_CIGARBOX02X";
		case joaat("p_crucifix02x"):
			return "p_crucifix02x";
		case joaat("p_bottlecrate01x"):
			return "p_bottleCrate01x";
		case joaat("p_can05x"):
			return "p_can05x";
		case joaat("p_cs_suitcase04x"):
			return "p_cs_suitcase04x";
		case joaat("p_cs_bagstrauss01x"):
			return "p_cs_bagstrauss01x";
		case joaat("p_bottle008x"):
			return "P_BOTTLE008X";
		case joaat("p_bottle009x"):
			return "P_BOTTLE009X";
		case joaat("p_bottle010x"):
			return "P_BOTTLE010X";
		case joaat("p_pocketmirror01x"):
			return "p_pocketMirror01x";
		case joaat("p_cigarette01x"):
			return "P_CIGARETTE01X";
		case joaat("p_traveltrunk02x"):
			return "P_TRAVELTRUNK02X";
		case joaat("p_chairwhite01x"):
			return "P_CHAIRWHITE01X";
		case joaat("p_journal_open01x"):
			return "P_JOURNAL_OPEN01X";
		case joaat("p_table42_cs"):
			return "p_table42_cs";
		case joaat("p_cs_newspaper_02x"):
			return "p_cs_newspaper_02x";
		case joaat("p_cs_potatoslice01x"):
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case joaat("p_spittoon01x"):
			return "p_spittoon01x";
		case joaat("p_woodbowl01x"):
			return "p_woodbowl01x";
		case joaat("p_pencil01x"):
			return "p_pencil01x";
		case joaat("p_spoonmid01x"):
			return "P_SPOONMID01X";
		case joaat("p_pan01x"):
			return "P_PAN01X";
		case joaat("p_pipe01x"):
			return "P_Pipe01x";
		case joaat("p_cs_railroadbond01x"):
			return "p_cs_railroadbond01x";
		case joaat("p_sharpeningstone01x"):
			return "p_sharpeningstone01x";
		case joaat("p_treestump02x"):
			return "p_treestump02x";
		case joaat("p_plate17x"):
			return "p_plate17x";
		case joaat("p_cs_newspaper_01x"):
			return "p_cs_newspaper_01x";
		case joaat("p_sadiehat01x"):
			return "p_sadiehat01x";
		case joaat("p_door_bla_jail_l_01x"):
			return "p_door_bla_jail_l_01x";
		case joaat("p_door_bla_jail_r_01x"):
			return "p_door_bla_jail_r_01x";
		case joaat("p_mashedpotato02x"):
			return "p_mashedPotato02x";
		case joaat("p_cs_bookhardcv08x"):
			return "p_cs_bookHardCv08x";
	}
	return "";
}

void func_611(int iParam0)
{
	if (func_704(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	}
}

void func_612(int iParam0)
{
	if (func_704(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_613(int iParam0)
{
	if (func_704(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_614(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_75(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_615(int iParam0)
{
	if (func_704(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_616(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

int func_617(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_618(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_705(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_706((375 + iVar28), 1);
			if (func_707(iParam0, &Var0, iVar5, 0))
			{
				if (func_708(iParam0, &Var6, iVar5))
				{
					Var29 = { func_709(iParam0, Var0, iVar5, 0) };
					func_710(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_711(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_712(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_713(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_619(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("weapon_revolver_cattleman_mexican") || *iParam1 == joaat("weapon_revolver_cattleman_pig")) || *iParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *iParam1 == joaat("weapon_revolver_schofield_calloway")) || *iParam1 == joaat("weapon_revolver_schofield_golden")) || *iParam1 == joaat("weapon_pistol_mauser_drunk")) || *iParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *iParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_620(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

bool func_621(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_714(iParam1);
	}
	return func_279(iParam0, iParam1);
}

bool func_622(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_715(iParam1);
	}
	return func_347(iParam0, iParam1);
}

bool func_623(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_624(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_716(iParam1);
	}
	else
	{
		func_19(iParam0, iParam1);
	}
}

bool func_625(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_626(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_627(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_628(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_12(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_13(&(iParam1->f_6), 0, 1);
	}
	if (!func_12(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_290(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_717(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_12(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_635(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_718(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_719(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_338(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_718(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_186(iParam1->f_6, 0, 1);
				}
				else
				{
					func_186(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_629(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_630(int* iParam0, int iParam1)
{
	if (!func_480(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_481(iParam0, 14);
		}
	}
}

bool func_631(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_632(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_633(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_634(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	int iVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			iVar1 = 0;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					iVar1 = 1;
				}
			}
			if (!bParam7)
			{
				if (uParam8 || iVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_635(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_12(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	func_718(iParam0, 18, 0, 1);
	func_718(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_636(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_107(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_637(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_107(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_638(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_639(int iParam0)
{
	int iVar0;

	iVar0 = func_647(func_720(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_640(int iParam0)
{
	if (func_641(81053684, iParam0))
	{
		return 1;
	}
	if (func_641(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_647(func_720(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_469(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

bool func_642()
{
	return Global_1946804->f_2792;
}

int func_643(int iParam0)
{
	if (func_721())
	{
		return 0;
	}
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (!func_722(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_644(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_705(iParam0, 1, 0) };
	return func_723(Var0.f_4);
}

void func_645(var uParam0, int iParam1)
{
	func_724(uParam0, iParam1);
}

int func_646(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_725(iParam0);
	if (func_726(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_541(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_727();
			}
			else
			{
				iVar0 = func_728();
			}
		}
		else if (func_72(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_729();
		}
		else
		{
			iVar0 = func_730();
		}
	}
	else if (func_640(&iVar2))
	{
		if (func_726(iVar2, -1303648999))
		{
			iVar0 = func_727();
		}
		else
		{
			iVar0 = func_728();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_729();
	}
	else
	{
		iVar0 = func_730();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_647(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_648(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = func_644(iParam0);
	iVar1 = func_647(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_731(iParam0) && func_732(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && func_733(32768)) || &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/]) && iParam0 != &Global_1946804->f_1497.f_1[iVar1 /*3*/])
	{
		if (func_731(&(Global_1946804->f_1497.f_1[iVar1 /*3*/])) && func_732(&(Global_1946804->f_1497.f_1[iVar1 /*3*/])))
		{
			iParam1 |= 32;
		}
		if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_469(iParam0))
		{
			case 81053684:
				if (func_641(-525676072, &uVar3))
				{
					iVar2 = func_647(func_720(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804->f_2377[iVar2 /*2*/] = &Global_1946804->f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (func_733(32768))
						{
							func_735(func_734(iVar1, 1));
						}
						if (func_733(32768) || (func_641(-2061583405, &iVar4) && !func_732(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (func_641(81053684, &iVar4))
						{
							iVar2 = func_647(func_720(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804->f_2377[iVar2 /*2*/] = &Global_1946804->f_57[iVar2 /*11*/];
							}
							Global_1946804->f_2377[iVar1 /*2*/] = iParam0;
							func_736(iVar0, iParam1, 6);
						}
					}
				}
		}
	}

void func_649(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_512(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_737(Var0);
}

int func_650()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_651(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_738(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_652(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_653()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_654(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_655()
{
	float fVar0;
	int iVar1;

	fVar0 = func_739(13);
	iVar1 = func_740(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_656()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_657()
{
	if (func_741())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_658()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_659()
{
	return Global_1955565->f_3;
}

void func_660(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_742(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_661(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_742(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

float func_662(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_663()
{
	return func_739(12) <= -99f;
}

bool func_664()
{
	return func_739(12) >= 99f;
}

bool func_665(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_666()
{
	if (func_12(Global_43800))
	{
		func_13(&Global_43800, 0, 0);
	}
}

int func_667(int iParam0)
{
	int iVar0;

	if (func_743(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

int func_668(int iParam0, bool bParam1)
{
	if (!func_12(Global_43800))
	{
		Global_43800 = func_744("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1945938)[Global_43800 /*18*/])->f_16 = &Global_23[3];
		func_745(Global_43800, 0, 1);
		func_746(Global_43800, 6, 1);
		if (bParam1)
		{
			func_746(Global_43800, 14, 1);
		}
	}
	else
	{
		if (!func_479(Global_43800, 0))
		{
			func_186(Global_43800, 1, 1);
		}
		if (func_747(Global_43800, 1) != 0f && iParam0)
		{
			func_745(Global_43800, 1, 1);
		}
		else
		{
			func_745(Global_43800, 0, 1);
		}
		return func_636(Global_43800, 1);
	}
	return 0;
}

bool func_669(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_670(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_174[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_158 };
			*(uParam0->f_174[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_327(uParam0, sParam1);
	func_175(uParam0, 2097152, 1);
	func_168(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_156, sParam1, true);
}

void func_671(var uParam0, var uParam1)
{
	if (((!func_165(uParam0, 32) || func_748(uParam0)) || func_165(uParam0, 268435456)) && !func_165(uParam0, 65536))
	{
		func_749(&(uParam0->f_212), 256);
	}
}

void func_672(var uParam0, int iParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, iParam1);
	}
}

bool func_673()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

void func_674()
{
	int iVar0;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == 130487986)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

void func_675(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

void func_676(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]))
		{
			func_750(uParam0, uParam0->f_174[iVar0 /*9*/]);
		}
		iVar0++;
	}
	Var1 = { func_365() };
	func_750(uParam0, &Var1);
	Var1 = { func_183(uParam0) };
	func_750(uParam0, &Var1);
}

bool func_677()
{
	return func_743(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

bool func_678()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_679(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

Vector3 func_680(var uParam0)
{
	return uParam0->f_214;
}

void func_681(var uParam0)
{
	int iVar0;

	if (func_541(&iVar0))
	{
		if (func_592(iVar0, 0))
		{
			if (func_469(iVar0) == -525676072)
			{
				PED::_0xD710A5007C2AC539(Global_35, 1249071452, 0);
				func_698(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_0xD710A5007C2AC539(Global_35, 1606587013, 0);
			}
			if (!func_592(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_682(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_751(0, 0);
		func_752(-1);
	}
	func_573(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_669(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_669(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_669(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_669(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_669(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_669(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_669(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_669(*uParam0, 4) && !func_669(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_669(*uParam0, 2048))
	{
		func_753(0, 0);
	}
	if (func_669(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_669(*uParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (func_669(*uParam0, 8192))
	{
		func_754();
	}
	if (!func_669(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_669(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_669(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_669(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_410() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_58(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_755(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_756(2);
						func_757(-1);
						func_758(vVar3);
						func_760(func_759());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_669(*uParam0, 4096))
	{
		func_514(Global_35);
	}
	if (!func_669(*uParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_669(*uParam0, 2097152))
	{
		if (func_761() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_762(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_683(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_684(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_165(uParam0, 2048) && !func_58(func_763(uParam0)))
	{
		bVar0 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_165(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_59(iVar1, func_763(uParam0), func_764(uParam0), iVar2, 1073741824);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_165(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_59(iVar3, func_763(uParam0), func_764(uParam0), 2, 1073741824);
		}
	}
}

void func_685(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if ((func_165(uParam0, 268435456) && !func_58(func_763(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_763(uParam0) };
			func_59(iVar0, vVar1, func_765(vVar1, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_686(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = iParam4;
	if (func_58(vParam1))
	{
		func_175(uParam0, 2048, 1);
	}
	else
	{
		func_168(uParam0, 2048);
		if (bParam5)
		{
			func_168(uParam0, -2147483648);
		}
	}
}

void func_687(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
				{
					if (!func_491(uParam0->f_13[iVar0 /*12*/], 8))
					{
						if (func_412(func_411(iVar1, 0, 1, 0)))
						{
							if (!func_766(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_412(func_411(iVar1, 1, 1, 0)))
						{
							if (!func_766(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_688(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_689(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_157() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_512(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_767(iParam1, 29, bVar4, 1, 0);
			func_767(iParam1, 31, bVar4, 1, 0);
			func_767(iParam1, 30, bVar4, 1, 0);
			func_767(iParam1, 22, bVar4, 1, 0);
			func_767(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_733(32768) && func_768(1108822547, 8)) && func_769(10, iParam3))
	{
		func_770(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_734(iVar1, 1);
			if (func_768(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_769(iVar1, iParam3))
				{
				}
				else if ((func_768(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_768(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_767(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_771(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_767(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_768(iVar3, 1))
							{
								func_772(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

void func_690(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_773(uParam0);
	func_170(uParam0, 0f, 0f, 0f);
	func_774(uParam0);
}

void func_691(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		(uParam0->f_13[iVar0 /*12*/])->f_11 = 0;
		iVar0++;
	}
}

void func_692(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_693(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_440(uParam0->f_13[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_694(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_666();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_695(int iParam0)
{
	func_775();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_696()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_697(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_776(bParam0);
}

int func_698(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_705(iParam1, 1, 0) };
		iParam3 = func_723(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_777(iParam1, iParam2, func_647(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_778(1, (func_157() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_647(iParam3, 1) /*11*/])
			{
				func_649(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_733(32768) && iParam1 != &Global_1946804->f_57[func_647(iParam3, 1) /*11*/])
			{
				func_779();
				func_649(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_649(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_780(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_649(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_182(0);
			func_781(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_649(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_699(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_705(iParam0, 0, 0) };
	Var5 = { func_709(iParam0, Var0, Var0.f_4, 0) };
	if (func_782(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_468(0), &Var5, iParam1);
}

int func_700(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_783(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_784(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_784(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_702(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

int func_703(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_704(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

struct<5> func_705(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_785(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_786(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_709(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_787(bParam1) };
			if (iParam2 && func_788(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_707(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_707(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_708(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_789(bParam1) };
			switch (func_469(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_790(iParam0, -1823706425))
			{
				Var0 = { func_709(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_790(iParam0, -1483207246))
			{
				Var0 = { func_709(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_791(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_706(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return -1990194462;
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685;
		case 376:
			return -649335959;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_707(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_782(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_708(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_792(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_709(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_592(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_468(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_710(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_793(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_791(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_711(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_468(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_711(bool bParam0)
{
	if (func_157() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_468(bParam0));
}

int func_712(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_794(iParam0))
	{
		return 0;
	}
	if (!func_711(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_713(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_795(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_714(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_796(iParam0, &iVar0))
	{
		return func_797(iVar0);
	}
	return 0;
}

int func_715(int iParam0)
{
	int iVar0;

	if (func_798(iParam0))
	{
		return 0;
	}
	if (!func_6(Global_35, 0))
	{
		return 0;
	}
	iVar0 = -1;
	if (!func_796(iParam0, &iVar0))
	{
		return 0;
	}
	if (func_714(iParam0))
	{
	}
	if (PED::_0x1E017404784AA6A3(Global_35, iParam0))
	{
		func_799(iParam0, 1);
		return 1;
	}
	return 0;
}

void func_716(int iParam0)
{
	int iVar0;

	if (!func_112(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (func_796(iParam0, &iVar0))
	{
		func_800(iVar0);
	}
}

int func_717(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_473(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_801(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_718(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_719(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_720(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_723(iVar0);
}

int func_721()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_802())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_722(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_592(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_786(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_803(iParam0, 1))
		{
			return false;
		}
	}
	return func_804(iParam0, 0, bParam2) >= iParam1;
}

int func_723(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_734(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_724(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_725(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_640(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_726(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_727()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_805())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_728()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_805())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_729()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_805())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_730()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_805())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_731(int iParam0)
{
	switch (func_469(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_732(int iParam0)
{
	var uVar0;

	return func_806(iParam0, &uVar0);
}

bool func_733(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

int func_734(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_735(int iParam0)
{
	func_772(iParam0, 8, 6);
}

void func_736(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_2377[func_647(iParam0, 1) /*2*/])->f_1 = ((Global_1946804->f_2377[func_647(iParam0, 1) /*2*/])->f_1 || iParam1);
}

void func_737(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_510(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_511(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_512(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_510(Param0))
			{
				return;
			}
			func_511(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_512(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_781(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_738(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1934603)[iParam0 /*16*/]) = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

float func_739(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_740(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

bool func_741()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

char* func_742(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_807(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_807(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_743(int iParam0)
{
	return iParam0 != 0;
}

int func_744(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_473(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_801(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_745(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	func_396(iVar0, iParam1);
}

void func_746(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_107(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

float func_747(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_12(iParam0))
	{
		return 0f;
	}
	iVar0 = func_107(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_748(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_177(uParam0) };
	Var8 = { func_183(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

void func_749(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_750(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_177(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, sParam1);
	}
}

void func_751(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_752(int iParam0)
{
	int iVar0;

	if (func_157() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

void func_753(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_412(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_808(1);
	}
}

void func_754()
{
	int iVar0;

	iVar0 = func_411(Global_35, 9, 1, 0);
	if (func_412(iVar0))
	{
		return;
	}
	iVar0 = func_411(Global_35, 7, 1, 0);
	if (func_412(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_411(Global_35, 0, 1, 0);
	if (func_412(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_411(Global_35, 1, 1, 0);
	if (func_412(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_411(Global_35, 18, 1, 0);
	if (func_412(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_809();
	if (func_412(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_502(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_810(3072, 0);
	if (func_412(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_502(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_755(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_366(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_756(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_757(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_758(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_759()
{
	return &Global_1899515;
}

void func_760(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

var func_761()
{
	return (func_811() || func_119());
}

void func_762(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_812(0f);
	Global_1935436->f_11 = 1;
	if (func_813())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_814();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

Vector3 func_763(var uParam0)
{
	return uParam0->f_217;
}

float func_764(var uParam0)
{
	return uParam0->f_220;
}

float func_765(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_766(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_767(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_734(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_815(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_768(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_647(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

bool func_769(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_770(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_768(1108822547, 6))
	{
		if (bParam2)
		{
			func_767(iParam0, iVar0, func_157() != -1, 0, 0);
			func_771(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_772(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

void func_771(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_647(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_647(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_772(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_647(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_647(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_647(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_773(var uParam0)
{
	struct<8> Var0;

	uParam0->f_166 = { Var0 };
}

void func_774(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_174[iVar0 /*9*/], "", 64);
		iVar0++;
	}
}

void func_775()
{
	Global_1911774 = 1;
}

void func_776(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

int func_777(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_816();
	if (iParam2 == 39)
	{
		Var0 = { func_705(iParam0, 1, 0) };
		iParam2 = func_647(func_723(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_726(iParam0, 866047851) && func_817(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_733(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_735(func_734(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_818(iParam2);
	func_819(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_820(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_820(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_821(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_822(iParam0, iParam2, iParam1, func_157() != -1);
	if (bParam4)
	{
		func_823(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_823(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_772(func_734(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_778(bool bParam0, bool bParam1, bool bParam2)
{
	func_824(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_779()
{
	func_825(&(Global_1946804->f_2776));
	func_826(32768);
	func_772(1108822547, 8, 6);
}

int func_780(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_647(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_781(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_363(Var0);
}

int func_782(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_709(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_468(bParam6), &Var0, 0);
	return uVar4;
}

void func_783(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_827(iParam1))
		{
			func_828(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_829(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_830(iParam0, 0);
			bVar0 = true;
		}
		func_702(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_784(int iParam0)
{
	if (!func_831(iParam0))
	{
		return 0;
	}
	return func_832(iParam0);
}

struct<4> func_785(bool bParam0)
{
	return func_709(1328661203, func_833(), -1591664384, bParam0);
}

int func_786(int iParam0)
{
	vector3 vVar0;

	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_787(bool bParam0)
{
	int iVar0;

	iVar0 = func_468(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_709(923904168, func_785(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_709(923904168, func_785(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_709(923904168, func_785(bParam0), -740156546, 0);
}

int func_788(int iParam0, bool bParam1)
{
	if (func_469(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_834(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_789(bool bParam0)
{
	int iVar0;

	iVar0 = func_468(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_709(271701509, func_785(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_709(271701509, func_785(bParam0), 12999093, 0);
}

int func_790(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_469(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_791(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_468(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_792(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_468(0);
	*uParam1 = { func_709(iParam0, func_787(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_793(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_794(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_795(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_796(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (&Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return 0;
}

bool func_797(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(&Global_1347701, iParam0);
}

int func_798(int iParam0)
{
	int iVar0;

	if (!func_796(iParam0, &iVar0))
	{
		return 0;
	}
	return (Global_40.f_4237[iVar0 /*3*/])->f_2;
}

void func_799(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	if (func_796(iParam0, &iVar0))
	{
		func_835(iVar0, bParam1);
	}
}

void func_800(int iParam0)
{
	int iVar0;

	func_836(Global_40.f_4237[iParam0 /*3*/]);
	if (func_112(&(Global_40.f_4237[iParam0 /*3*/])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && func_112(&(Global_40.f_4237[iVar0 + 1 /*3*/])))
		{
			Global_40.f_4237[iVar0 /*3*/] = &Global_40.f_4237[iVar0 + 1 /*3*/];
			(Global_40.f_4237[iVar0 /*3*/])->f_1 = (Global_40.f_4237[iVar0 + 1 /*3*/])->f_1;
			(Global_40.f_4237[iVar0 /*3*/])->f_2 = (Global_40.f_4237[iVar0 + 1 /*3*/])->f_2;
			func_835(iVar0, func_797(iVar0 + 1));
			func_281(Global_40.f_4237[iVar0 + 1 /*3*/]);
			func_835(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

void func_801(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_396(iParam0, 1);
	func_397(iParam0, 1);
	func_398(iParam0, 128);
}

bool func_802()
{
	int iVar0;

	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_803(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_837(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_838("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_839(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_412(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_840(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_840(iVar1);
	}
	return 0;
}

int func_804(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_786(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_837(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_841(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_468(bParam2), iParam0, 0);
	return iVar2;
}

int func_805()
{
	int iVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_842(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_842(iVar0)) || iVar0 == joaat("weapon_lasso"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_806(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

char* func_807(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_808(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_809()
{
	if (!func_412(Global_1935630->f_45))
	{
		return joaat("weapon_unarmed");
	}
	return Global_1935630->f_45;
}

int func_810(int iParam0, int iParam1)
{
	var uVar0;

	return func_843(&uVar0, iParam0, iParam1);
}

bool func_811()
{
	return &Global_1935436 == 1;
}

void func_812(float fParam0)
{
	func_844(10, fParam0);
}

int func_813()
{
	if (func_157() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_814()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

int func_815(int iParam0)
{
	int iVar0;

	iVar0 = func_469(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

void func_816()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_817(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_726(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_726(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_726(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_726(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_726(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_726(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_818(int iParam0)
{
	func_845(&(Global_1946804->f_2589), iParam0);
}

void func_819(int iParam0, int iParam1)
{
	func_846(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_820(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_821(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_469(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_769(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_819(iVar1, iVar3);
		}
	}
	if (func_847(-1586649372) && func_769(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_819(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_819(iVar1, iVar3);
					}
				}
			}
			func_848(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_848(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_819(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_848(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_819(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_819(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_848(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_848(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_819(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_848(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_819(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_819(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_469(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_819(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_726(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_469(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_469(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_819(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_469(&(uParam0->f_1[iVar1 /*3*/])) || func_726(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_819(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_822(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_849(0);
	if (iParam2 != 0 && func_850(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_851(iParam0, func_734(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_823(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_157() != -1;
	iVar7 = func_849(0);
	if (func_733(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_734(iVar0, 1);
			if (func_768(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_768(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_852(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_853(uParam0);
				if (iVar3 > 0)
				{
					if (!func_733(524288))
					{
						func_512(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_734(iVar0, 1);
							if (func_768(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_768(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_852(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_819(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_826(524288);
				}
			}
		}
	}

void func_824(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_854(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_157() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_855(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_856(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_856(Global_40.f_7729);
				Global_1946804->f_1378 = func_856(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_857(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_858(0, 1);
	}
}

void func_825(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_826(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_828(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_287(iParam0, iParam1))
		{
			if (func_302(iParam0, iParam1))
			{
				if (func_303(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_304(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_829(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_830(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_831(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_832(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

struct<4> func_833()
{
	struct<4> Var0;

	return Var0;
}

int func_834(int iParam0, bool bParam1)
{
	if (func_794(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_468(bParam1), iParam0, 0);
}

void func_835(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(&Global_1347701, iParam0))
		{
			MISC::SET_BIT(Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(&Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(Global_1347701, iParam0);
	}
}

void func_836(var uParam0)
{
	if ((func_6(Global_35, 0) && func_714(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_859(*uParam0);
	}
	if ((!func_6(Global_35, 0) || !func_714(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_281(uParam0);
	}
}

int func_837(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_786(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_726(iParam0, 1399091007))
	{
		func_860(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_838(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_468(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_839(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_840(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_841(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_861(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_862(&Var0, func_787(0));
	}
	if (!func_863(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_840(iVar14);
	return uVar15;
}

bool func_842(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_843(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_864(uParam1, 128);
	if (func_838("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_839(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_412(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_0xC4DEC3CA8C365A5D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0x0556E9D2ECF39D01(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_864(uParam1, 16))) && (!WEAPON::_0x6AD66548840472E5(Var4.f_4) || func_864(uParam1, 4))) && (!func_842(Var4.f_4) || func_864(uParam1, 8)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_840(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	return iVar0;
}

void func_844(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_807(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_865(1, bVar1, 1, sVar2);
		func_866(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_867(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_431();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_867(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_867(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_845(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_868(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_868(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_869(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_846(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_870(uParam0, 1))
	{
		func_871(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

bool func_847(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_647(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_647(iParam0, 1) /*11*/];
}

void func_848(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_819(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_819(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_819(iVar2, iVar0);
		}
	}
}

int func_849(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_872();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_850(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, uParam1, uParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, uParam1, uParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_851(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

int func_852(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_647(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_733(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_853(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_854(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_157() == -1)
	{
		func_873(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_874(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_855(int iParam0, int iParam1)
{
	if (func_157() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

void func_857(int iParam0, bool bParam1, int iParam2)
{
	func_875(&(Global_1946804->f_1378), iParam0);
	func_876(2, iParam0, 6);
	if (bParam1)
	{
		func_858(0, 1);
	}
}

void func_858(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_877(0);
	}
	if (bParam0)
	{
		func_512(8);
		func_512(512);
	}
	else
	{
		func_512(8);
		func_512(16);
	}
}

void func_859(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x2B4CE170DE09F346(Global_35, iParam0);
	}
	func_799(iParam0, 0);
}

void func_860(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_861(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_862(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_863(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_468(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_864(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_865(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_866(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_742(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

int func_867(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

bool func_868(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_869(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_870(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_871(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_872()
{
	return Global_1946804->f_1;
}

void func_873(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_874(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_875(var uParam0, int iParam1)
{
	int iVar0;

	if (func_157() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_873(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_874(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_876(int iParam0, int iParam1, int iParam2)
{
	if (func_157() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_877(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

