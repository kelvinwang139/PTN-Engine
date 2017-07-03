/*
 * This file is part of PTN Engine
 *
 * Copyright (c) 2017 Eduardo Valgôde
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "gtest/gtest.h"

#include "WhiteBoxTests/Fixtures/FixtureTestPlace.h"


TEST_F(FixtureTestPlace, InputPlace)
{
	inputPlace();
}

TEST_F(FixtureTestPlace, EnterPlaceDefault)
{
	enterPlace();
}

TEST_F(FixtureTestPlace, ExitPlaceDefault)
{
	enterPlace();
	exitPlace();
	exitPlace();
}

TEST_F(FixtureTestPlace, EnterPlace)
{
	//TODO testar max int
	enterPlace(1);
	enterPlace(2);
	enterPlace(3);
}

TEST_F(FixtureTestPlace, ExitPlace)
{
	//TODO testar max int
	enterPlace(4);
	exitPlace(1);
	exitPlace(2);
	exitPlace(3);
}

