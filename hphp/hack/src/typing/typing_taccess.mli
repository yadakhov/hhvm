(**
 * Copyright (c) 2014, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the "hack" directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 *
 *)

(* Expands all Taccess types present in the given type *)
val expand: Typing_env.env -> Typing_defs.ty -> Typing_env.env * Typing_defs.ty
